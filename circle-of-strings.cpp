//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
   public:
 template <typename dataType>
    void outputVector(vector<dataType> &vec) {
        for(auto i : vec) cout << i << ' ';
        cout << "\n";
    }
    
    void dfs(int i, vector<string> &arr, vector<vector<int>> &first, vector<vector<int>> &last, vector<bool> &vis) {
        if(vis[i]) return;
        vis[i] = true;
        int k = arr[i][arr[i].size() - 1] - 'a';
        for(int j = 0; j < first[k].size(); j++) dfs(first[k][j], arr, first, last, vis);
    }
    
    int isCircle(int n, vector<string> arr) {
        vector<int> indegree(26, 0), outdegree(26, 0);
        vector<vector<int>> first(26, vector<int>()), last(26, vector<int>());
        for(int i = 0; i < n; i++) {
            first[arr[i][0] - 'a'].emplace_back(i);
            last[arr[i][arr[i].size() - 1] - 'a'].emplace_back(i);
            if(arr[i][0] != arr[i][arr[i].size() - 1]) {
                indegree[arr[i][0] - 'a']++;
                outdegree[arr[i][arr[i].size() - 1] - 'a']++;
            }
        }
        // outputVector<int>(indegree);
        // outputVector<int>(outdegree);
        for(int i = 0; i < 26; i++) {
            if(indegree[i] != outdegree[i]) return 0;
        }
        vector<bool> vis(n, false);
        dfs(0, arr, first, last, vis);
        for(auto i : vis) {
            if(!i) return 0;
        } 
        return 1;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<string> A;
        string s;
        
        for(int i = 0;i < N; i++)
        {
            cin>>s;
            A.push_back(s);
        }
        
        Solution ob;
        cout<<ob.isCircle(N, A)<<endl;
    }
    return 0;
}
// } Driver Code Ends
