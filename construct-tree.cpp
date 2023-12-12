//{ Driver Code Starts
//

#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};


void printPostOrder(Node *root)
{
	if(root==NULL)
		return;
	printPostOrder(root->left);
	printPostOrder(root->right);
	cout<<root->data<<" ";
}

// } Driver Code Ends

/*Complete the code here.
Node is as follows:
struct Node
{
  int data;
  Node* left;
  Node* right;
};
*/
class Solution{
    public:
    Node* createTree(int preorder[], int preStart, int preEnd, int inorder[],
    int inStart, int inEnd, unordered_map<int,vector<int>>&mp)
    {
        if(preStart > preEnd || inStart > inEnd)    return NULL;

        Node* root=new Node(preorder[preStart]);    // the new root
        
        vector<int> & occurences = mp[root->data];  // find all occurences of root data in the inorder traversal
        
        if(occurences.empty())  return NULL;
        
        int inorderIdx = occurences.front(); // the index of root in inorder traversal
        occurences.erase(occurences.begin());
       
        int numLeft = inorderIdx - inStart; // how many elements are left in inorder before root

        root->left = createTree(preorder, preStart+1, preStart+numLeft, inorder, inStart, inorderIdx-1, mp);
        root->right = createTree(preorder, preStart+numLeft+1, preEnd, inorder, inorderIdx+1, inEnd, mp);

        return root;
    }
    Node* buildTree(int inorder[],int preorder[], int n)
    {
        // Code here
        unordered_map<int,vector<int>>mp;   //(root, index)
        for(int i=0;i<n;i++)
            mp[inorder[i]].push_back(i);
        
        Node* root = createTree(preorder, 0, n-1, inorder, 0, n-1, mp);
        return root;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		int inorder[n], preorder[n];
		for(int i=0; i<n; i++)
			cin>> inorder[i];
		for(int i=0; i<n; i++)
			cin>> preorder[i];
		Solution obj;
		Node *root = obj.buildTree(inorder, preorder, n);
		printPostOrder(root);
		cout<< endl;
	}
}

// } Driver Code Ends
