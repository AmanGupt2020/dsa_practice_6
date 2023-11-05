//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
         long long l=0;
        long long r=n-1;
        long long lmax=0;
        long long rmax=0;
        long long ans=0;
        while(l<=r){
            if(arr[l]<arr[r]){
                if(arr[l]>=lmax) lmax=arr[l];
                else ans+=lmax-arr[l];
                l++;
            }
            else{
                if(arr[r]>=rmax) rmax=arr[r];
                else ans+=rmax-arr[r];
                r--;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends
