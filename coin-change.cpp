//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long int f(int coins[], int n, int sum, int idx,vector<vector<long long int>>&dp)
    {
        if(sum == 0)return 1;
        if(sum < 0)return 0;
        
        if(idx == n)return 0;
        
        if(dp[idx][sum] != -1)return dp[idx][sum];
        
        return dp[idx][sum] = f(coins, n, sum - coins[idx], idx,dp) + f(coins, n, sum, idx+1,dp);
    }
    
    long long int count(int coins[], int N, int sum) {
        
        vector<vector<long long int>>dp(N,vector<long long int>(sum+1,-1));
        
        return f(coins,N,sum,0,dp);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int sum, N;
        cin >> sum >> N;
        int coins[N];
        for (int i = 0; i < N; i++) cin >> coins[i];
        Solution ob;
        cout << ob.count(coins, N, sum) << endl;
    }

    return 0;
}


// } Driver Code Ends
