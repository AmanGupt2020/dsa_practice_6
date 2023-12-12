//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
private:
     bool dfs(int node,int color,int vis[],vector<int>adj[]){
         vis[node]=color;
         for(auto it:adj[node]){
             if(!vis[it]){
                 if(dfs(it,!color,vis,adj)==false) return false;
             }
             else if(color==vis[it]) return false;
         }
         return true;
     }
public:
	bool isBipartite(int V, vector<int>adj[]){
	    int vis[V]={0};
	    for(int i=0;i<V;i++){
	        if(!vis[i]){
	            if(dfs(i,0,vis,adj)==false) return false;
	        }
	    }
	    return true;
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
		bool ans = obj.isBipartite(V, adj);    
		if(ans)cout << "1\n";
		else cout << "0\n";  
	}
	return 0;
}
// } Driver Code Ends
