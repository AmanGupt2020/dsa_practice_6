//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
#define MOD 1000000007
class Solution {
  public:
    int solve(int n,vector<int>&dp)
    {
        int pre2=0;
        int pre1=1;
        for(int i=2;i<=n;i++)
        {
             int ans=(pre2+pre1)%MOD;
             pre2=pre1;
             pre1=ans;
        }
        return pre1;
    }
    int nthFibonacci(int n){
        vector<int>dp(n+1,0);
        return solve(n,dp);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends
