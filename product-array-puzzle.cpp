//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       
     
        vector<long long int> ans;
        long long product=1;
        int count=0;
        for(auto x: nums){
            if(x==0) count++;
            else product*=x;
            
            if(count>=2){
                vector<long long int> ans1(n,0);
                return ans1;
            }
        }
        
        
        for(int i=0; i<n; i++){
            if(nums[i]!=0 and count==1) ans.push_back(0);
            
            else if(nums[i]==0){
                ans.push_back(product);
            }
            else{
                ans.push_back(product/nums[i]);
            }
        }
        
        return ans;
        
        
        
        
        // vector<long long int> ans;
        // long long int prod;
        
        // for(int i = 0; i<n; i++){
        //     prod = 1;
            
        //     for(int j = 0; j<n; j++){
        //         prod *= nums[j];
        //     }
        //     if(nums[i]!=0){
        //         prod/=nums[i];
        //     }
        //     else prod = nums[i-1];
        //     ans.push_back(prod);
            
        // }
        // return ans;   
    }
};


//{ Driver Code Starts.
int main()
 {
    int t;  // number of test cases
    cin>>t;
    while(t--)
    {
        int n;  // size of the array
        cin>>n;
        vector<long long int> arr(n),vec(n);
        
        for(int i=0;i<n;i++)    // input the array
        {
            cin>>arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr,n);   // function call
        
        for(int i=0;i<n;i++)    // print the output
        {
            cout << vec[i] << " ";
        }
        cout<<endl;
    }
	return 0;
}
// } Driver Code Ends
