//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


struct node
{
    int data;
    struct node* next;
    
    node(int x){
        data = x;
        next = NULL;
    }
    
};

/* Function to print linked list */
void printList(struct node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}


// } Driver Code Ends
/*
  Reverse a linked list
  The input list will have at least one element  
  Return the node which points to the head of the new LinkedList
  Node is defined as 
    struct node
    {
        int data;
        struct node* next;
    
        node(int x){
            data = x;
            next = NULL;
        }
    
    }*head;
*/

class Solution
{
    public:
    int leng(node* head){
        
        node* temp=head;
        int c=0;
        
        while(temp){
            
            temp=temp->next;
            c++;
        }
        
        return c;
        
    }
    struct node *reverse (struct node *head, int k)
    { 
         if (!head || k == 1) 
        return head;
        
        
        
        node* dumy=new node(-1);
        dumy->next=head;
        
        node* prv=dumy;
        node* nxt=dumy;
        node* cur=dumy;
        
        int count=0;
        while (cur) { 
        cur = cur->next; 
        count++; 
    }
        while(nxt){
        
        cur=prv->next;    
        
        nxt=cur->next;
        
        int toloop=count > k ? k : count - 1;
        
        for(int i=1; i<toloop; i++){
            cur->next = nxt->next;
            nxt->next = prv->next;
            prv->next = nxt;
            nxt = cur->next ;        
        }
        prv=cur;
        count -=k;
            
        }
        
        return dumy->next;
    }
};


//{ Driver Code Starts.

/* Drier program to test above function*/
int main(void)
{
    int t;
    cin>>t;
     
    while(t--)
    {
        struct node* head = NULL;
        struct node* temp = NULL;
        int n;
        cin >> n;
         
        for(int i=0 ; i<n ; i++)
        {
            int value;
            cin >> value;
            if(i == 0)
            {
                head = new node(value);
                temp = head;
            }
            else
            {
                temp->next = new node(value);
                temp = temp->next;
            }
        }
        
        int k;
        cin>>k;
        
        Solution ob;
        head = ob.reverse(head, k);
        printList(head);
    }
     
    return(0);
}


// } Driver Code Ends
