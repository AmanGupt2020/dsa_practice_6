//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
//User function Template for C++



class DisjointSet {
public:
   vector<int> Size, parent;

    DisjointSet(int n) {
        Size.resize(n + 1, 1);
        parent.resize(n + 1);
        for (int i = 0; i <= n; ++i) parent[i] = i;
    }

    int findUpar(int node) {
        if (node == parent[node]) return node;
        return parent[node] = findUpar(parent[node]);
    }

    void unionBySize(int u, int v) {
        int ulp_u = parent[u];
        int ulp_v = parent[v];

        if (Size[ulp_u] < Size[ulp_v]) {
            parent[ulp_u] = ulp_v;
            Size[ulp_v] += Size[ulp_u];
        } else {
            parent[ulp_v] = ulp_u;
            Size[ulp_u] += Size[ulp_v];
        }
    }
};
class Solution
{
public:
    int largestIsland(vector<vector<int>>& grid) 
    {
       int n=grid.size();
       DisjointSet ds(n*n);
       int dr[] ={-1,0,1,0};
       int dc[]=  {0,-1,0,1};
       for(int row=0;row<n;row++){
           for(int col=0;col<n;col++){
               if(grid[row][col]==0) continue;
               for(int ind=0;ind<4;ind++){
                   int newr=row+dr[ind];
                   int newc= col+dc[ind];
                   
                   if(newr<n && newr>=0 && newc<n &&  newc>=0  && grid[newr][newc]==1){
                       int nodeNo=row*n+col;
                       int adjNodeNo=newr*n+newc;
                       
                       if(ds.findUpar(nodeNo)!=ds.findUpar(adjNodeNo)){
                           ds.unionBySize(nodeNo,adjNodeNo);
                       }
                   }
               }
           }
       }
       int ans=0;
       for(int row=0;row<n;row++){
           for(int col=0;col<n;col++){
               if(grid[row][col]==1) continue;
               set<int> st;
               for(int ind=0;ind<4;ind++){
                   int newr=row+dr[ind];
                   int newc= col+dc[ind];
                   
                   if(newr<n && newr>=0 && newc<n &&  newc>=0  && grid[newr][newc]==1){
                       int nodeNo=row*n+col;
                       int adjNodeNo=newr*n+newc;
                       
                       st.insert(ds.findUpar(adjNodeNo));
                   }
               }
               int temp=1;
               for(auto it:st){
                   temp+=ds.Size[it];
               }
               ans=max(ans,temp);
           }
       }
       for(int i=0;i<n*n;i++){
           ans=max(ans,ds.Size[i]);
       }
       return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){

        int n;
        cin>>n;
        vector<vector<int>>grid(n,vector<int>(n));
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>grid[i][j];
        Solution ob;
        cout<<ob.largestIsland(grid)<<endl;
    }
    return 0;
}

// } Driver Code Ends
