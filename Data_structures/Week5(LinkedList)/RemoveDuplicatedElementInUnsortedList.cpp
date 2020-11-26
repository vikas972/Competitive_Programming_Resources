#include <bits/stdc++.h>
using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

void print(Node *root)
{
Node *temp = root;
while(temp!=NULL)
{
cout<<temp->data<<" ";
temp=temp->next;
}
}

Node* removeDuplicates(Node *root);

int main() {
	// your code goes here
	int T;
	cin>>T;
	
	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;
 
		for(int i=0;i<K;i++){
		int data;
		cin>>data;
			if(head==NULL)
			head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp=temp->next;
			}
		}
		
	
		Node *result  = removeDuplicates(head);
		print(result);
		cout<<endl;
		
	}
	return 0;
}// } Driver Code Ends


/*
The structure of linked list is the following

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

// Function to remove duplicates from the linked list
// root: root of the linked list
Node * removeDuplicates( Node *start) 
{
 // your code goes here
  // your code goes here
  
   unordered_set<int> seen; 
  
    /* Pick elements one by one */
    struct Node *curr = start; 
    struct Node *prev = NULL; 
    while (curr != NULL) 
    { 
        // If current value is seen before 
        if (seen.find(curr->data) != seen.end()) 
        { 
           prev->next = curr->next; 
           delete (curr); 
        } 
        else
        { 
           seen.insert(curr->data); 
           prev = curr; 
        } 
        curr = prev->next; 
    }
  return start;
  /**
  if(head==NULL || head->next==NULL)return head;
  
  unordered_set<Node *> s;
  Node *prev;
  while(head!=NULL){
      if(s.find(head->data)!=s.end()){
          prev=prev->next->next;
          free(prev->next);
          head=prev;
      }else{ 
             prev=head;
             s.insert(head->data);
             head=head->next; 
      }
  
  }
  return head;**/
  
  /**
 Node *temp=head;
 Node *next_next;
 Node *prev->data=temp->data;
 //if(temp==NULL)return;
 while(temp->next!=NULL){
     if(temp->data == temp->next->data){
         next_next=temp->next->next;
        free(temp->next);
        temp->next=next_next;
        
     }else{
      temp=temp->next;}
 }
 return head;**/
}
