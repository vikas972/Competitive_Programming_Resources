// driver code

#include <bits/stdc++.h>
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

bool detectLoop(Node* head);

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
        
        if( detectLoop(head) )
            cout<< "True\n";
        else
            cout<< "False\n";
    }
	return 0;
}
// } Driver Code Ends


/*

struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }

*/

bool detectLoop(Node* head)
{
    // your code here
    
   /** 
    unordered_set<Node *> od;
    while(head!=NULL){
        if(od.find(head)!=od.end()){
            cout<<head->data<<endl;
            return true;
            
        }
        od.insert(head);
        head=head->next;
    }
    
    return false;
**/
    
    
    //if(!head) return false;
    if(head==NULL) return false;
    
    Node* fast = head;
    Node* slow = head;
    
    slow=slow->next;
    fast=fast->next->next;
    cout<<fast<<" "<<slow<<endl;
    while( fast != slow)
    {
        //if( !fast || !fast->next ) return false;
        if( fast==NULL || fast->next==NULL ) return false;
        fast=fast->next->next;
        slow=slow->next;
    }
   // cout<<slow->data<<endl;
    slow=head;
    while(slow!=fast){
        slow=slow->next;
        fast=fast->next;
    }
    cout<<fast->data;
    return true;
 
    
    
    
}