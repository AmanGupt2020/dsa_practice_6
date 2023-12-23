//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// design the class in the most optimal way

class LRUCache
{
      private:
       class Node{
        public:
        int key,value;
        Node *prev;
        Node *next;
    };
     unordered_map<int,Node *> cache;
    int cap;
    Node *head,*tail;
  
  
    private :void addNode(Node *node){
        Node *nbr=head->next;
        node->next=nbr;
        node->prev=head;
        nbr->prev=node;
        head->next=node;
    }
    private: void removeNode(Node *node){
        Node *prevNbr=node->prev;
        Node *nextNbr=node->next;
        prevNbr->next=nextNbr;
        nextNbr->prev=prevNbr;
        node->next=node->prev=nullptr;
    }
    private: void movetofront(Node *node){
        removeNode(node);
        addNode(node);
    }
   
   public:
    //Constructor for initializing the cache capacity with the given value.   
    LRUCache(int capacity)
    {   
        cap=capacity;
        head=new Node();
        tail=new Node();
        
        head->next=tail;
        tail->prev=head;
    }
    
    //Function to return value corresponding to the key.
    int GET(int key)
    {
       
        if(cache.find(key) == cache.end()){
            return -1;
        }else{
            int v1= cache[key]->value;
            movetofront(cache[key]);
            return v1;
        }
    }
    
    //Function for storing key-value pair.
    void SET(int key, int value)
    {   
       if(cache.find(key) == cache.end()){
           Node *newNode=new Node();
           newNode->key=key;
           newNode->value=value;
          if(cache.size()==cap){
              Node *LRU_Node=tail->prev;
              cache.erase(LRU_Node->key);
              removeNode(LRU_Node);
          }
          addNode(newNode);
          cache[key]=newNode;
          
       }else{
           cache[key]->value=value;
           movetofront(cache[key]);
           
       }  
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int capacity;
        cin >> capacity;
        LRUCache *cache = new LRUCache(capacity);
        
        int queries;
        cin >> queries;
        while (queries--)
        {
            string q;
            cin >> q;
            if (q == "SET")
            {
                int key;
                cin >> key;
                int value;
                cin >> value;
                cache->SET(key, value);
            }
            else
            {
                int key;
                cin >> key;
                cout << cache->GET(key) << " ";
            }
        }
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends
