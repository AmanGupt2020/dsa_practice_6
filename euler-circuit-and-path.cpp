//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
 void dfs(int i,vector<bool>&vis,vector<int> adj[]){
    vis[i]=true;
    vector<int> a=adj[i];
    for(auto &it:a){
    if(!vis[it])
    dfs(it,vis,adj);
    }
    }
    bool isConnected(vector<bool> &vis,int v,vector<int> adj[]){
       int i;
       for(i=0;i<v;i++){
        if(adj[i].size()!=0)
        break;
       }
        if(i==v)
        return true;
        dfs(i,vis,adj);
        for(i=0;i<v;i++){
        if(vis[i]==false && adj[i].size()>0)
        return false;
        }
        return true;
    }
	int isEulerCircuit(int v, vector<int>adj[]){
	    // Code here
	   vector<bool> vis(v,false);
	   if(isConnected(vis,v,adj)==false)
	   return 0;
	   int count=0;
	   for(int i=0;i<v;i++){
	   if(adj[i].size()&1)
	   count++;
	   }
	    if(count>2)
	    return 0;
	    return (count)?1:2;
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
		int ans = obj.isEulerCircuit(V, adj);
		cout << ans <<"\n";	}
	return 0;
}
// } Driver Code Ends
