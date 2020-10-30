#include <bits/stdc++.h>
using namespace std;

std::list<int> graph[5];

void addEdge(list<int> adj[],int n,int e){
    adj[n].push_back(e);
    adj[e].push_back(n);
}




void BFS(int s){
bool visited[5];

for(int i=0;i<5;i++){
    visited[i]=false;
}

list<int> queue;
visited[s]=true;
queue.push_back(s);

list<int>::iterator x; 
cout<<"BFS Traversal"<<endl;
while(!queue.empty()){
        s = queue.front(); 
        cout << s << " "; 
        queue.pop_front(); 
        
        for(x=graph[s].begin();x!=graph[s].end();x++){
            
            if(!visited[*x]){
                visited[*x]=true;
                queue.push_back(*x);
            }
        }
}


    
}

void display(list<int> adj[],int v){
    for(int i=0;i<v;i++){
       for(auto x:adj[i]){
           cout<<x<<" ";
       }
       cout<<endl;
    }
}

int main(){
    
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int node1,node2;
        cin>>node1>>node2;
        addEdge(graph,node1,node2);
    }
   display(graph,5);
   BFS(0);
    return 0;
}