#include <bits/stdc++.h>
using namespace std;

class linkedList{
    public:
        int data;
        linkedList *next=NULL;
};
//linkedList *revK(int k,linkedList *head);
void insertNode(int num,linkedList *&head){
    linkedList *new_node=new linkedList();
    new_node->data=num;
    new_node->next=NULL;
    linkedList *temp=head;
    if(temp==NULL){
        head=new_node;
        return;
    }
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new_node;
    return;
}


linkedList *revk(linkedList *head,int k){
    
    linkedList *current=head;
    linkedList *prev=NULL;
    linkedList *nex=NULL;
    int c=0;
    while(current!=NULL && k>c){
        nex=current->next;
        current->next=prev;
        prev=current;
        current=nex;
        c++;
    }
    if(nex!=NULL){
        head->next=revk(nex,k);
    }
    
    return prev;
}

void display(linkedList *head){
    linkedList *temp= head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return;
}
int main(){
    linkedList *head=NULL;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        insertNode(num,head);
    }
    display(head);
    int k;
    cin>>k;
    head=revk(head,k);
    display(head);
    return 0;
}