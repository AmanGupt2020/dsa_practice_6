//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

 int f(int ind, int coins[], int V, vector<vector<int>>& dp){
        if(ind == 0){
            if(V%coins[0]==0) return V/coins[0];
            return 1e9;
        }
        if(dp[ind][V] != -1) return dp[ind][V];
        int notTake = f(ind-1, coins, V, dp);
        int take = INT_MAX;
        if(coins[ind]<=V) take = 1+f(ind, coins, V-coins[ind], dp);
        return dp[ind][V] = min(take, notTake);
    }

	public:
	int minCoins(int coins[], int M, int V) 
	{ 
	    // Your code goes here
	    vector<vector<int>>dp(M, vector<int>(V+1, 0));
	    for(int v = 0;v<=V;v++){
	        if(v%coins[0] == 0) dp[0][v] = v/coins[0];
	        else dp[0][v] = 1e9;
	    }
	    for(int ind=1;ind<M;ind++){
	        for(int v=0;v<=V;v++){
	            int notTake = dp[ind-1][v];
                int take = INT_MAX;
                if(coins[ind]<=v) take = 1+dp[ind][v-coins[ind]];
                dp[ind][v] = min(take, notTake);
	        }
	    }
	    return dp[M-1][V] < 1e9 ? dp[M-1][V] : -1;
	} 
	  
};

//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int v, m;
        cin >> v >> m;

        int coins[m];
        for(int i = 0; i < m; i++)
        	cin >> coins[i];

      
	    Solution ob;
	    cout << ob.minCoins(coins, m, v) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends
