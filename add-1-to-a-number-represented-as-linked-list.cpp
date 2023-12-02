//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data%10; 
        node = node->next; 
    }  
    cout<<"\n";
} 


// } Driver Code Ends
//User function template for C++

/* 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    private:
    Node *reverse(Node *head)
    {
        Node *prev = NULL;
        Node *next = NULL;
        Node *curr = head;
        while (curr != NULL)
          {
             next = curr->next;
             curr->next = prev;
             prev = curr;
             curr = next;
          }
    return prev;
    }
    void insertAtTail(Node* &head,Node* &tail,int val)
    {
        Node* temp=new Node(val);
        if(head==NULL)
        {
            head=temp;
            tail=temp;
        }
        else
        {
            tail->next=temp;
            tail=temp;
        }
    }
    Node* add(Node* head)
    {
        int carry=1;
        Node* ansHead=NULL;
        Node* ansTail=NULL;
        while(head!=NULL || carry!=0)
        {
            int val1=0;
            if(head!=NULL)
                val1=head->data;
            
            int sum=carry+val1 ;
            int digit=sum%10;
            insertAtTail(ansHead,ansTail,digit);
            carry=sum/10;
            if(head!=NULL)
                head=head->next;
           
        }
        return ansHead;
    }
    public:
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        
        
        head=reverse(head);
        
        Node *ans=add(head);
        ans=reverse(ans);
        return ans;
    }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 

// } Driver Code Ends
