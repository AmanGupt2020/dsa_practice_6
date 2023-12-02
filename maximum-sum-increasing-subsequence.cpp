//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
		

	public:
	int maxSumIS(int arr[], int n)  
	{  
	    // Your code goes here
	    vector<int> dp(n);
	    dp[0] = arr[0];
	    
	    
	    int result = dp[0];
	    
	    for(int i = 1;i<n;i++)
	    {
	        dp[i] = arr[i];
	        
	        for(int j = 0;j<n;j++)
	        {
	            if(arr[j]<arr[i])
	            {
	                dp[i] = max(dp[i],dp[j] + arr[i]);
	            }
	        }
	        result = max(result,dp[i]);
	    }
	    
	   // for(auto it : dp)
	   // {
	   //     cout<<it<<" ";
	   // }
	    return result;
	}  
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];

        for(int i = 0; i < n; i++)
        	cin >> a[i];

      

	    Solution ob;
	    cout << ob.maxSumIS(a, n) << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends
