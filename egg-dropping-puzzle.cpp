//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
   int dp[201][201];
    int solve(int e, int f) {
        if(f==0 || f==1) {
            return f;
        }
        if(e==1) {
            return f;
        }
        if(dp[e][f]!=-1) {
            return dp[e][f];
        }
        int ans=INT_MAX;
        for(int k=1; k<=f; k++) {
            int t=1+max(solve(e-1, k-1), solve(e, f-k));
            ans=min(ans, t);
        }
        return dp[e][f]=ans;
    }
    int eggDrop(int e, int f) 
    {
        memset(dp, -1, sizeof(dp));
        return solve(e, f);
    }
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking eggs and floors count
        int n, k;
        cin>>n>>k;
        Solution ob;
        //calling function eggDrop()
        cout<<ob.eggDrop(n, k)<<endl;
    }
    return 0;
}

// } Driver Code Ends
