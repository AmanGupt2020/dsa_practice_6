//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int search(int a[], int low, int high, int key) {
    if(key==a[low]) return low;
    if(key==a[high]) return high;
    
    while(low<=high) {
       int mid = (low+high)/2;
       
       if(a[mid] > a[high]) {
           if(key > a[mid] || key < a[high]) low = mid + 1;
           else high = mid - 1;
       }
       
       else {
           if(key < a[mid] || key > a[high]) high = mid - 1;
           else low = mid + 1;
       }
    }
    if(a[high]==key) return high;
    else return -1;
    }
};

//{ Driver Code Starts. 
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int A[n];
        for(int i = 0; i < n; i++)
            cin >> A[i];
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(A, 0, n - 1, key) << endl;
    }
return 0;
}
// } Driver Code Ends
