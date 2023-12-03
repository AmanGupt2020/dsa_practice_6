//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// Tree Node
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

// Function to Build Tree
Node *buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N') return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;) ip.push_back(str);

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
        if (i >= ip.size()) break;
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
/*
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
public:
    // This function returns overall maximum path sum in 'result'
    // And returns max path sum going through root.
    int findMaxSumUtil(Node* pnode, int* result_max_sum)
    {
        int l, r;
        int max_sum_single_child;
        int current_sum;
    
        // Base Case
        if(pnode == NULL)
        {
            return 0;
        }
      if (!pnode->left && !pnode->right) return pnode->data;
  
        // find the maximum sum node-to-leaf path starting from the left child
        l = findMaxSumUtil(pnode->left, result_max_sum);
        // find the maximum sum node-to-leaf path starting from the right child
        r = findMaxSumUtil(pnode->right, result_max_sum);


        // it is important to return the maximum sum node-to-leaf path starting from the current node
        
        // case 1: left child is null
        if (pnode->left == NULL) {
            //current_sum = r + pnode->data;
            //*result_max_sum = max(*result_max_sum, current_sum); // Store the Maximum Result.
            return r + pnode->data;
        }
     
        // case 2: right child is null
        if (pnode->right == NULL) {
            //current_sum = l + pnode->data;
            //*result_max_sum = max(*result_max_sum, current_sum); // Store the Maximum Result.
            return l + pnode->data;
        }
     
        // find the maximum sum path "through" the current node
        current_sum = l + r + pnode->data;
    
        *result_max_sum = max(*result_max_sum, current_sum); // Store the Maximum Result.
    
        // Both left and right child exists.
        // Max path for parent call of root. This path must include at-most one child of root.
        max_sum_single_child = max(l, r) + pnode->data;
    
        return max_sum_single_child;
    }

    int maxPathSum(Node* root)
    {
        // code here
            // Initialize result
            int result = INT_MIN;
            int value;
         
            // Compute and return result
            value = findMaxSumUtil(root, &result);
        
              //--- for test case ---
       //         7                 
      //        /    \               
        //    Null   -3            
      //     (case - 1)         
      //   value of res will be INT_MIN but the answer is 4 , which is returned by the 
      // function maxPathSumUtil().
            
        if(root->left && root->right)
        {
            return result;
        }
        
        return max(result, value);
    }
};

//{ Driver Code Starts.

int main() {
    int tc;
    scanf("%d ", &tc);
    while (tc--) {
        string treeString;
        getline(cin, treeString);
        Node *root = buildTree(treeString);
        Solution ob;
        cout << ob.maxPathSum(root) << "\n";
    }
    return 0;
}
// } Driver Code Ends
