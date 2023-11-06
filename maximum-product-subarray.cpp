//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    // code here
	     long long map=INT_MIN;
	    long long mip=INT_MAX;
	    long long ans=INT_MIN;
	    for(int i=0;i<n;i++)
	    {
	        
	        if(arr[i]<0)
	        swap(map,mip);
	        
	        map=max((long long)arr[i],arr[i]*map);
	        mip=min((long long)arr[i],arr[i]*mip);
	        
	        long long temp=max(map,mip);
	        ans=max(temp,ans);
	    }
	    
	    return ans;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<int> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends
