//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
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



// } Driver Code Ends
/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution
{
    public:
   Node* rev(Node* head){
        Node* curr = head;
        Node* prev = NULL;
        Node* forw = NULL;
        
        while(curr != NULL){
            forw = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = forw;
        }
        return prev;
    }
    
    Node *compute(Node *head)
    {
      
       
       Node* temp = rev(head);
       Node* ans = temp;
       
       while(temp != NULL){
           if(temp -> next != NULL && temp-> data > temp -> next -> data){
               temp -> next = temp -> next -> next;
                continue;
           }
           else{
           temp = temp -> next;
           } 
       }
       
       
       
       return rev(ans);
    }
    
};
   


//{ Driver Code Starts.

int main()
{
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
				temp = temp->next;
			}
		}
        Solution ob;
        Node *result = ob.compute(head);
        print(result);
        cout<<endl;
    }
}

// } Driver Code Ends
