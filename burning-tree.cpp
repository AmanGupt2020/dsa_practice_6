//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};


Node *buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current Node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current Node
            currNode->left = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current Node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


// } Driver Code Ends
//User function Template for C++

/*
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    void mapping(Node* root, map<Node*, Node*> &m){
        if(root ==NULL) return;
        if(root->left == NULL && root->right == NULL) return;
        
        if(root->left != NULL) m[root->left] = root;
        if(root->right != NULL) m[root->right] = root;
        
        mapping(root->left, m);
        mapping(root->right, m);
        return;
    }
    void findNode(Node* root, int target, Node* &node){
        if(root == NULL) return;
        if(root->data == target){
            node = root;
            return;
        } 
        findNode(root->left, target, node);
        findNode(root->right, target, node);
    }
    int minTime(Node* root, int target) 
    {
        map<Node*, Node*> m;
        int minT = 0;
        m[root] = NULL;
        mapping(root, m);
        
        Node *node = NULL;
        findNode(root, target, node);
        
        set<int> vis;
        queue<pair<Node*, int>> q;
        
        q.push({node, 1});
        vis.insert(node->data);
        
        while(!q.empty()){
            Node* qNode = q.front().first;
            int t = q.front().second;
            minT = max(minT, t);
            q.pop();
            
            if(qNode->left != NULL && vis.find(qNode->left->data) == vis.end()) {
                q.push({qNode->left, t+1});
                vis.insert(qNode->left->data);
            }
            if(qNode->right != NULL && vis.find(qNode->right->data) == vis.end()){
                q.push({qNode->right, t+1});
                vis.insert(qNode->right->data);
            }
            if(m[qNode] != NULL && vis.find(m[qNode]->data) == vis.end()){
                q.push({m[qNode], t+1});
                vis.insert(m[qNode]->data);
            }
        }
        return (minT-1);
    }
};

//{ Driver Code Starts.

int main() 
{
    int tc;
    scanf("%d ", &tc);
    while (tc--) 
    {    
        string treeString;
        getline(cin, treeString);
        // cout<<treeString<<"\n";
        int target;
        cin>>target;
        // cout<<target<<"\n";

        Node *root = buildTree(treeString);
        Solution obj;
        cout<<obj.minTime(root, target)<<"\n"; 

        cin.ignore();

    }


    return 0;
}

// } Driver Code Ends
