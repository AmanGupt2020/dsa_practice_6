//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
#define ll long long

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	ll countStrings(int n) {
	    ll mod = 1e9+7;
	    ll ending_with_one=1, ending_with_zero=1;
	    for(int i=2; i<=n; ++i){
	        ll temp = ending_with_zero;
	        ending_with_zero = (ending_with_zero + ending_with_one)%mod;
	        ending_with_one = temp;
	        
	    }
	    return (ending_with_one + ending_with_zero)%mod;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.countStrings(n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends
