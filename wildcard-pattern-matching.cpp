//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
int solve(vector<vector<int>>& dp, string& pattern, string& str,int i, int j){
       if(i<0 || j<0)return 0;
       if(dp[i][j]!=-1)return dp[i][j];
       if(pattern[i-1]==str[j-1] || pattern[i-1]=='?') dp[i][j]=solve(dp,pattern,str,i-1,j-1);
       //if(pattern[i-1]=='?') dp[i][j]=solve(dp,pattern,str,i-1,j-1);
       else if(pattern[i-1]=='*') dp[i][j]=(solve(dp,pattern,str,i,j-1)||solve(dp,pattern,str,i-1,j));
       return dp[i][j];
       
    
    }
    
bool helper(int n, int m, string &pattern, string &str, vector<vector<int>> &dp)
    {
        if(n == 0 && m == 0) return true;
        if(n < 0 || m < 0) return false;
        if(dp[n][m] != -1) return dp[n][m];
        if(pattern[n-1] == str[m-1] || pattern[n-1] == '?') return dp[n][m] = helper(n-1, m-1, pattern, str, dp);
        else if(pattern[n-1] == '*')  return dp[n][m] =  helper(n, m-1, pattern, str, dp) || helper(n-1, m, pattern, str, dp);
    }
    int wildCard(string pattern,string str)
    {
        int n=pattern.size(),m=str.size();
        vector<vector<int>> dp(n+1, vector<int>(m+1,-1));
        return helper(n,m,pattern,str,dp);
        dp[0][0]=1;
        solve(dp,pattern,str,n,m);
        if(dp[n][m]==1)return 1;
        return 0;
    }
};

//{ Driver Code Starts.
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
           string pat,text;
           cin>>pat;
cin.ignore(numeric_limits<streamsize>::max(),'\n');
           cin>>text;
           Solution obj;
           cout<<obj.wildCard(pat,text)<<endl;
   }
}

// } Driver Code Ends
