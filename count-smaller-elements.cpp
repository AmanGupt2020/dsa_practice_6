//{ Driver Code Starts
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	vector<int> constructLowerArray(int *arr, int n) {
        vector<int> vs,ans;
      
        for(int i=0;i<n;i++)
            vs.push_back(arr[i]);
            
            
    sort(vs.begin(),vs.end());

        for(int i=0;i<n;i++){
            int index = lower_bound(vs.begin(),vs.end(),arr[i])-vs.begin();
            ans.push_back(index);
            vs.erase(vs.begin()+index);
           
        }
        
        return ans;
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
        auto ans = ob.constructLowerArray(arr, n);
        for (auto x : ans) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends
