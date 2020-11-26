#include <bits/stdc++.h>
using namespace std;

class List{
    public:
        int data;
        List *next=NULL;
};



List *head=NULL;



void insert(int num){
    List *temp=new List();
    temp->data=num;
    temp->next=NULL;
    List *nex=head;
    if(head==NULL){
        head=temp;
        return;
    }
    while(nex->next!=NULL){
        nex=nex->next;
    }
    nex->next=temp;
    return;
}

void display(){
    List *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void reverse(){
    List *temp=NULL,*current=head,*prev=NULL;
    while(current!=NULL){
        temp=current->next;
        current->next=prev;
        prev=current;
        current=temp;
    }
    head=prev;
    return;
}

int main() {
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
	    int num;
	    cin>>num;
	    insert(num);
	}
	display();
	reverse();
	display();
	return 0;
}
