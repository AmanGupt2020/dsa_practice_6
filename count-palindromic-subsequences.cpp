//{ Driver Code Starts
// Counts Palindromic Subsequence in a given String
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
   long long mul_mod(long long a, long long b, long long p) { return ((a % p) * (b % p)) % p; }
    long long add_mod(long long a, long long b, long long p) { return ((a % p) + (b % p)) % p; }
    long long sub_mod(long long a, long long b, long long p) { return ((a - b) % p) + ((a >= b) ? 0 : p); }
    
    int totalPS(int st,int end,string &str,vector<vector<int> > &dp) {
        if(st==end) return 2;
        if(st>end) return 1;
        if(dp[st][end]!=-1) return dp[st][end];
        int val=0,mod=(int)1e9+7;
        if(str[st]==str[end]) {
            val=totalPS(st+1,end-1,str,dp);
        }
        int a1=totalPS(st+1,end,str,dp);
        int a2=totalPS(st,end-1,str,dp);
        int a3=totalPS(st+1,end-1,str,dp);
        val = add_mod(val,sub_mod(add_mod(a1,a2,mod),a3,mod),mod);
        return dp[st][end]=val;
    }
    
    /*You are required to complete below method */
    long long int  countPS(string str)
    {
       int n=str.length();
       vector<vector<int> > dp(n,vector<int>(n,-1));
       return totalPS(0,n-1,str,dp)-1;
    }
     
};

//{ Driver Code Starts.
// Driver program
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        Solution ob;
        long long int ans = ob.countPS(str);
        cout<<ans<<endl;
    } 
}
// } Driver Code Ends
