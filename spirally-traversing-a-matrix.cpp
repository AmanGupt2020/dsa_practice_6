//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
        vector<int> ans;
        int a=0;
        int b=c-1;
        int k=0;
        int m=r-1;
        
        
        while(a<=b && k<= m){
            
            for(int i=a;i<=b;i++){
                ans.push_back(matrix[k][i]);
                
            }
            k++;
            
            for(int i=k;i<=m;i++){
                ans.push_back(matrix[i][b]);
                
            }
            b--;
            
           
            if(k<=m){
            for(int i= b;i>=a;i--){
                ans.push_back(matrix[m][i]);
            }
            m--;
            }
            if(a<=b){
            for(int i=m;i>=k;i--){
                ans.push_back(matrix[i][a]);
                
            }
            a++;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends
