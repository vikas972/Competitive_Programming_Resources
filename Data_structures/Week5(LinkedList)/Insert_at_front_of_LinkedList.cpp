#include <bits/stdc++.h>
using namespace std;
class LinkedList{
    
    public:
        int data;
        LinkedList *next,*head=NULL;
        void newNode(int data);
        void display();
};

void LinkedList::newNode(int num){
     LinkedList* temp= new LinkedList();
     temp->data=num;
     temp->next=head;
     head=temp;
}
void LinkedList::display(){
    LinkedList *ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}
int main(){
    LinkedList vikas;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            int num;
            cin>>num;
            vikas.newNode(num);
        }
        vikas.display();
        cout<<endl;
    }
    return 0;
}