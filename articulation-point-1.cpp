//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int timer =1 ;
  void dfs(int node ,int parent ,vector<int>&vis,vector<int>&low,vector<int>&time,vector<int>&mark,vector<int>adj[]){
      vis[node]=1;
      time[node]=low[node]=timer;
      timer++;
      int k=0;
      for(auto i:adj[node]){
          if(i==parent){continue;}
          if(!vis[i]){
              dfs(i,node,vis,low,time,mark,adj);
              low[node] = min(low[node],low[i]);
              if(low[i] >= time[node] && parent!=-1){
                  mark[node]=1;
              }
              k++;
          }
          else{
              low[node] = min(low[node],time[i]);
          }
          
      }
      if(k>1 && parent==-1){
          mark[node]=1;
      }
  }
    vector<int> articulationPoints(int V, vector<int>adj[]) {
        vector<int>low(V+1),time(V+1),ans,mark(V+1,0),vis(V+1,0);
        dfs(0,-1,vis,low,time,mark,adj);
        for(int i=0;i<V;i++){
            if(mark[i]){
                ans.push_back(i);
            }
        }
        if(ans.size()==0){return {-1};}
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		vector<int> ans = obj.articulationPoints(V, adj);
		for(auto i: ans)cout << i << " ";
		cout << "\n";
	}
	return 0;
}
// } Driver Code Ends
