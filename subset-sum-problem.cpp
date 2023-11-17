//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    bool subsetSumUtil(int ind, int target, vector<int>& arr, vector<vector<int>>& dp) {
    if (target == 0)
        return true;

    if (ind == 0)
        return arr[0] == target;

    if (dp[ind][target] != -1)
        return dp[ind][target];

    bool notTaken = subsetSumUtil(ind - 1, target, arr, dp);
	if(notTaken==1){
		return true; 
	}
    bool taken = false;
    if (arr[ind] <= target)
        taken = subsetSumUtil(ind - 1, target - arr[ind], arr, dp);

    return dp[ind][target] = notTaken || taken;
}
    int equalPartition(int N, int arr[])
    {
        // code here
        
        int totSum = 0,n=N;
        vector<int>a;
        for(int i=0;i<N;i++){
            a.push_back(arr[i]);
        }

        for (int i = 0; i < n; i++) {
            totSum += a[i];
        }
    
        if (totSum % 2 == 1)
            return false;
        else {
            int k = totSum / 2;
    
            vector<vector<int>> dp(n, vector<int>(k + 1, -1));
    
            return subsetSumUtil(n - 1, k, a, dp);
        }
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
// } Driver Code Ends
