//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	vector <int> dijkstra(int V, vector<vector<int>> adj[], int S) {
        // Code here
        vector<int> ans(V, INT_MAX);
        ans[S] = 0;
        queue<pair<int, int>> pq;
        pq.push({0, S});
        while(!pq.empty()) {
            pair<int, int> front = pq.front();
            pq.pop();
            for(auto v : adj[front.second]) {
                if(front.first + v[1] < ans[v[0]]) {
                    ans[v[0]] = front.first + v[1];
                    pq.push({ans[v[0]], v[0]});
                }
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        int S;
        cin>>S;
        
        Solution obj;
    	vector<int> res = obj.dijkstra(V, adj, S);
    	
    	for(int i=0; i<V; i++)
    	    cout<<res[i]<<" ";
    	cout<<endl;
    }

    return 0;
}


// } Driver Code Ends
