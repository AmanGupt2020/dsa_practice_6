//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> matrixSum(int n, int m, vector<vector<int>> mat, int q, vector<int> queries[])
    {
        // code here
        vector<int>res;
        vector<vector<int>>dir1={{-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1}};
        vector<vector<int>>dir2={{-2,-2},{-2,-1},{-2,0},{-2,1},{-2,2},{-1,2},{0,2},{1,2},{2,2},{2,1},{2,0},{2,-1},{2,-2},{1,-2},{0,-2},{-1,-2}};
        for(int i=0;i<q;i++){
            int sum=0;
            int x=queries[i][1],y=queries[i][2];
            if(queries[i][0]==1){
                for(auto d:dir1){
                    int nx=x+d[0],ny=y+d[1];
                    if(nx>=0 && ny>=0 && nx<n && ny<m){
                        sum+=mat[nx][ny];
                    }
                }
            }
            else{
                for(auto d:dir2){
                    int nx=x+d[0],ny=y+d[1];
                    if(nx>=0 && ny>=0 && nx<n && ny<m){
                        sum+=mat[nx][ny];
                    }
                }
            }
            res.push_back(sum);
        }
        return res;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m, q, ty, i, j;
        cin>>n>>m;
        vector<vector<int>> mat(n, vector<int>(m, 0));
        for(int i = 0;i < n;i++)
            for(int j = 0;j < m;j++)
                cin>>mat[i][j];
        cin>>q;
        vector<int> queries[q];
        for(int k = 0;k < q;k++){
            cin>>ty>>i>>j;
            queries[k].push_back(ty);
            queries[k].push_back(i);
            queries[k].push_back(j);
        }
        
        Solution ob;
        vector<int> ans = ob.matrixSum(n, m, mat, q, queries);
        for(int u: ans)
            cout<<u<<"\n";
    }
    return 0;
}
// } Driver Code Ends
