//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    void solve(int i, int j, vector<vector<int>> &m, vector<string> &ans, string path, int &n, 
    vector<vector<int>> &vis)
    {
       if (i < 0 || j < 0 || i >= n || j >= n || m[i][j] == 0 || vis[i][j] == 1) {
            return;
        }

    if (i == n - 1 && j == n - 1) {
        ans.push_back(path);
        return;
    }

    vis[i][j] = 1;

    // Top
    solve(i - 1, j, m, ans, path + "U", n, vis);

    // Left
    solve(i, j - 1, m, ans, path + "L", n, vis);

    // Right
    solve(i, j + 1, m, ans, path + "R", n, vis);

    // Bottom
    solve(i + 1, j, m, ans, path + "D", n, vis);

    vis[i][j] = 0; // Backtrack
    }
    
    vector<string> findPath(vector<vector<int>> &m, int n) 
    {
        vector<string> ans;
        string path;
        
        vector<vector<int>> vis(n, vector<int> (n,0));
        if(m[0][0]==1)
            solve( 0, 0,m, ans, path, n, vis);
        return ans;
    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends
