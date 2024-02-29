//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	
long long sumBitDifferences(int arr[], int n) {
	    // code here
	    long long  count = 0;

        for (int i = 0; i < 32; i++) { 

            int countSet = 0;

            for (int num =0; num<n; num++) {

                if ((arr[num] >> i & 1) == 1) {

                    countSet++;

                }

            }

            count += (countSet * (long) (n - countSet)) * 2; 

        }

        return count;  
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.sumBitDifferences(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends
