//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
int help(int * arr,int n,int i,vector<int> & dp){
	    if(i>=n)return 0;
	    if(dp[i]!=-1)return dp[i];
	    int take=arr[i]+help(arr,n,i+2,dp);
	    int nottake=help(arr,n,i+1,dp);
	    return dp[i]=max(take,nottake);
	}
	int findMaxSum(int *arr, int n) {
	    // code here
	    vector<int> dp(n+1,-1);
	    return help(arr,n,0,dp);
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends
