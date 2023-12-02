//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
     int countWays(int n)
    {
        vector<int>dp(n+1,-1);
       dp[0]=1;
       dp[1]=1;
       for(int i=2;i<=n;i++){
           dp[i]=(dp[i-1]+dp[i-2])%1000000007;
       }
       return dp[n];
    }
};



//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking stair count
        int m;
        cin>>m;
        Solution ob;
        cout<<ob.countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}

// } Driver Code Ends
