//{ Driver Code Starts
#include<bits/stdc++.h>
 
using namespace std; 


bool findPair(int arr[], int size, int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,n;
        cin>>l>>n;
        int arr[l];
        for(int i=0;i<l;i++)
            cin>>arr[i];
        if(findPair(arr, l, n))
            cout<<1<<endl;
        else cout<<"-1"<<endl;
    }
    
  
    return 0;
}
// } Driver Code Ends

bool binarySearch(int arr[], int low, int high, int target) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return true;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return false;
}

bool findPair(int arr[], int size, int n) {
    // Sort the array
    std::sort(arr, arr + size);

    for (int i = 0; i < size - 1; ++i) {
        int target = arr[i] + n;

        // Perform binary search for the target value
        if (binarySearch(arr, i + 1, size - 1, target)) {
            return true;
        }
    }

    return false;
    
}
