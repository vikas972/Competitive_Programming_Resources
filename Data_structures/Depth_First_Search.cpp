#include<bits/stdc++.h>
using namespace std;
class Graph{
    int V;
    list<int> *adj;
    public:
        Graph(int V);
        void addEdge(int node,int edge);
        void DFS(int s);
        void DFSprint(int s,bool visited[]);
};

Graph :: Graph(int V){
    this->V=V;
    adj=new list<int>[V];
}
void Graph::addEdge(int node,int edge){
    adj[node].push_back(edge);
     adj[edge].push_back(node);
}
void Graph::DFSprint(int s,bool visited[]){
    visited[s]=true;
    cout<<s<<" ";
    
    for(auto x:adj[s]){
        if(!visited[x]){
            DFSprint(x,visited);
        }
    }
}
void Graph::DFS(int s){
    bool *visited=new bool[V];
    for(int i=0;i<V;i++){
        visited[i]=false;
    }

    DFSprint(s,visited);
    
}


int main(){
    
    int NofNodes;
    cin>>NofNodes;
    Graph g(NofNodes);
    int NofEdges;
    cin>>NofEdges;
    for(int i=0;i<NofEdges;i++){
        int n1,n2;
        cin>>n1>>n2;
        g.addEdge(n1,n2);
    }
     g.DFS(0);
    
    
    
    return 0;
    
}