#include<bits/stdc++.h>
using namespace std;
class LinkedList{
    public:
        int data;
        LinkedList *next;
};
LinkedList *head=NULL;

void makeLastFirst(){
    
    LinkedList *temp=head;
    LinkedList *node;
    
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    node=temp->next;
    temp->next=NULL;
    
    node->next=head;
    head=node;
    
    
}
void insertAtEnd(int new_data){
    LinkedList *temp=new LinkedList();
    temp->data=new_data;
    temp->next=NULL;
    LinkedList *t=head;
    if(head==NULL){
        head=temp; return;
    }
    
    while(t->next!=NULL){
        t=t->next;
    }
    t->next=temp;
    return;
}

void display(){
    LinkedList *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return;
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        insertAtEnd(num);
    }
    makeLastFirst();
    display();
    return 0;
}