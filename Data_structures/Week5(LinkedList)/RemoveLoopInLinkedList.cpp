// driver code

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void loopHere(Node* head, Node* tail, int position)
{
    if(position==0) return;
    
    Node* walk = head;
    for(int i=1; i<position; i++)
        walk = walk->next;
    tail->next = walk;
}

bool isLoop(Node* head)
{
    if(!head) return false;
    
    Node* fast = head->next;
    Node* slow = head;
    
    while( fast != slow)
    {
        if( !fast || !fast->next ) return false;
        fast=fast->next->next;
        slow=slow->next;
    }
    
    return true;
}

int length(Node* head)
{
    int ret = 0;
    while(head)
    {
        ret++;
        head = head->next;
    }
    return ret;
}

void removeLoop(Node* head);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, num;
        cin>>n;
        
        Node *head, *tail;
        cin>> num;
        head = tail = new Node(num);
        
        for(int i=0 ; i<n-1 ; i++)
        {
            cin>> num;
            tail->next = new Node(num);
            tail = tail->next;
        }
        
        int pos;
        cin>> pos;
        loopHere(head,tail,pos);
        
        removeLoop(head);
        
        if( isLoop(head) || length(head)!=n )
            cout<<"0\n";
        else
            cout<<"1\n";
    }
	return 0;
}
// } Driver Code Ends


/*
structure of linked list node:

struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

*/
#include <bits/stdc++.h>
void removeLoop(Node* head)
{    
    unordered_set<Node *> s;
    Node *prev;
    while(head!=NULL){
        if(s.find(head) !=s.end())break;
        s.insert(head);
        prev=head;
        head=head->next;
    }
    prev->next=NULL;
    
    
/**
 if(!head) return;
    
    Node* fast = head->next;
    Node* slow = head;
    
    while( fast != slow )
    {
        if( !fast || !fast->next ) return;
        fast=fast->next->next;
        slow=slow->next;
    }
    
    int size = 1;
    fast = fast->next;
    while( fast != slow )
    {
        size++;
        fast = fast->next;
    }
    
    slow = head;
    fast = head;
    for(int i=0; i<size-1; i++)
        fast = fast->next;
    
    while( fast->next != slow )
    {
        fast = fast->next;
        slow = slow->next;
    }
    fast->next = NULL;
    **/

    
}