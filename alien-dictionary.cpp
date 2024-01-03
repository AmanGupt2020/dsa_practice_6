//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
    public:
    vector<int> topoSort(int V, vector<vector<int>> &adj){
		int indegree[V] = {0};
		for (int i = 0; i < V; i++) {
			for (auto it : adj[i]) {
				indegree[it]++;
			}
		}

		queue<int> q;
		for (int i = 0; i < V; i++) {
			if (indegree[i] == 0) {
				q.push(i);
			}
		}
		vector<int> topo;
		while (!q.empty()) {
			int node = q.front();
			q.pop();
			topo.push_back(node);
			// node is in your topo sort
			// so please remove it from the indegree

			for (auto it : adj[node]) {
				indegree[it]--;
				if (indegree[it] == 0) q.push(it);
			}
		}

		return topo;
	}
	
    void dfs(int i, vector<vector<int>> &adj,vector<int> &vst, stack<int> &st){
        vst[i] = 1;
        for(auto adjnode: adj[i]){
            if(vst[adjnode] == 0){
                dfs(adjnode, adj, vst, st);
            }
        }
        st.push(i);
    }
    
    string findOrder(string dictionary[], int N, int K) {
        //code here
        int n = N;
        int k= K;
        vector<vector<int>> adj(k);
    
        for(int i=0; i<n-1; i++){
            string str1 = dictionary[i];
            string str2 = dictionary[i+1];
    
            int len = min(str1.length(), str2.length());
            for(int j=0; j<len; j++){
                if(str1[j] != str2[j]){
                    char s1 = str1[j];
                    char s2 = str2[j];
                    adj[s1-'a'].push_back(s2-'a');
                    break;
                }
            }
        }
        
        vector<int> vst(k, 0);
        stack<int> st;
        for(int i=0; i<k; i++){
            if(vst[i] == 0){
                dfs(i, adj, vst, st);
            }
        }
        
        string strfinal = "";
    
        vector<int> ans;
        for(int i=0; i<k; i++){
            ans.push_back(st.top());
            st.pop();
        }
        
        
        for (auto it : ans){
            strfinal = strfinal + char(it + 'a');
        }
        return strfinal;
    }
};

//{ Driver Code Starts.
string order;
bool f(string a, string b) {
    int p1 = 0;
    int p2 = 0;
    for (int i = 0; i < min(a.size(), b.size()) and p1 == p2; i++) {
        p1 = order.find(a[i]);
        p2 = order.find(b[i]);
        //	cout<<p1<<" "<<p2<<endl;
    }

    if (p1 == p2 and a.size() != b.size()) return a.size() < b.size();

    return p1 < p2;
}

// Driver program to test above functions
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;
        string dict[N];
        for (int i = 0; i < N; i++) cin >> dict[i];
        
        Solution obj;
        string ans = obj.findOrder(dict, N, K);
        order = "";
        for (int i = 0; i < ans.size(); i++) order += ans[i];

        string temp[N];
        std::copy(dict, dict + N, temp);
        sort(temp, temp + N, f);

        bool f = true;
        for (int i = 0; i < N; i++)
            if (dict[i] != temp[i]) f = false;

        if(f)cout << 1;
        else cout << 0;
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends
