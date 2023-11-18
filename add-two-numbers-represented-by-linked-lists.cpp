//{ Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
Node * reverse_list(Node *head)
{
    Node *curr=head,*prev=NULL,*next=NULL;
    while(curr!=NULL)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    head=prev;
    return head;
}
class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        Node *head1= reverse_list(first);
        Node *head2= reverse_list(second);

        Node *head=NULL;
        int digit,carry=0;
        while(head1!=NULL&&head2!=NULL)
        {
            int sum=head1->data+head2->data+carry;
            digit=sum%10;
            carry=sum/10;
            Node *new_node= new Node(digit);
            new_node->next=head;
            head=new_node;
            head1=head1->next;
            head2=head2->next;
        }
        if(head1!=NULL&&head2==NULL)
        {
            while(head1!=NULL)
            {
                int sum=head1->data+carry;
                digit=sum%10;
                carry=sum/10;
                Node *new_node= new Node(digit);
                new_node->next=head;
                head=new_node;
                head1=head1->next;
            }
        }
        else  if(head1==NULL && head2!=NULL)
        {
            while(head2!=NULL)
            {
                int sum=head2->data+carry;
                digit=sum%10;
                carry=sum/10;
                Node *new_node= new Node(digit);
                new_node->next=head;
                head=new_node;
                head2=head2->next;
            }
        }
        if(carry>0)
        {
            Node *new_node= new Node(carry);
            new_node->next=head;
            head=new_node;
            //return head;
        }
        return head;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends
