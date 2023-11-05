//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	      if(n<=1){
       return -1;
   }
   
   sort(arr,arr+n);  // array is sorted 
   int largest = arr[n-1]; // storing the largest element 
   int secondLargest = -1;
   for(int i = n-2;i>=0;i--){
       if(arr[i]<largest){  // chcek the second largest element is smaller than the largest if the smaller the  return it 
           secondLargest = arr[i];
           break;
           
       }
   }
   return secondLargest;
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
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends
