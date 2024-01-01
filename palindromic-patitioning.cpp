//{ Driver Code Starts
// Initial Template for c++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
     bool ispalind(int start,int end,string s){
        while(start<=end){
            if(s[start]!=s[end]){
                return 0;
            }
            start++;
            end--;
        }
        return 1;
    }
    int palindromicPartition(string str)
    {
        int n=str.size();
        vector<int> dp(n+1,INT_MAX);
        dp[0]=-1;
        for(int i=0;i<n;i++){
            int ans=INT_MAX;
            for(int j=i;j>=0;j--){
                if(ispalind(j,i,str)){
                    ans=min(ans,1+dp[j]);
                }
            }
            dp[i+1]=ans;
        }
        return dp[n];
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        
        Solution ob;
        cout<<ob.palindromicPartition(str)<<"\n";
    }
    return 0;
}
// } Driver Code Ends
