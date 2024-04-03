 public:
    
    /*You are required to complete below function */
    int kthCommonAncestor(Node *root, int k, int x, int y)
    {
        // your code goes here
        stack<Node*> stk;
        
        while(root) {
            if((root->data <= x && root->data >= y) || (root->data <= y && root->data >= x)) {
                stk.push(root);
                break;
            }
            
            stk.push(root);
            
            if(root->data > x)
                root = root->left;
            else
                root = root->right;
        }
        
        // cout << stk.size() << ":\n";
        
        while(k > 1 && stk.size()) {
            stk.pop();
            k--;
        } 
        
        return (k == 1 && stk.size())? stk.top()->data: -1;
