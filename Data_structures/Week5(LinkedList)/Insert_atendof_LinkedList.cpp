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
     LinkedList* travel=head;
     temp->data=num;
     temp->next=NULL;
     if(head==NULL){
         head=temp;
         return;
     }
     while(travel->next!=NULL){
         travel=travel->next;
     }
     travel->next=temp;
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