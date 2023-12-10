//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
     vector<long long> nsl(long long arr[],int n){
        stack<long long>st;
        vector<long long>vec(n,0);

        for(int i=0;i<n;i++){
            vec[i] = i+1;
        }
        int j=0;
        while(j<n){
            while(!st.empty() && arr[st.top()]>=arr[j]){
                st.pop();
            }
            
            if(!st.empty()){
                vec[j] = j - st.top();
            }
            else{
                vec[j] = j+1;
            }
            st.push(j);
            j++;
        }
        
        return vec;
    }
    vector<long long>nsr(long long arr[],int n){
        stack<long long>st;
        vector<long long>vec(n,0);
        
        for(int i=n-1;i>=0;i--){
            vec[i] = n-i;
        }
        int j=n-1;
        while(j>=0){
            while(!st.empty() && arr[st.top()]>arr[j]){
                st.pop();
            }
            
            if(!st.empty()){
                vec[j] = st.top()-j;
            }
            else{
                vec[j] = n-j;
            }
            st.push(j);
            j--;
        }
        
        return vec;
    }

    long long getMaxArea(long long arr[], int n)
    {
        // Your code here

        auto x = nsl(arr,n);
        auto y = nsr(arr,n);
        long long maxv = 0;
        for(int i=0;i<n;i++){
            maxv = max((x[i]+y[i]-1)*arr[i],maxv); 
        }
        
        return maxv;
    }
};


//{ Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}

// } Driver Code Ends
