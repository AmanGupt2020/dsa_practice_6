//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        // Your code here
         unordered_map<long,int>mp;
        
        int p=0;
        int ans=0;
        for(int i=0; i<n; i++){
            
            
           p+=A[i];if(p==0){
               
               ans=max(ans, i+1);
               continue;
           }
           if(mp[p]){
               ans=max(ans, i-mp[p]+1);
           }
           if(mp[p]==0){
                mp[p]=i+1;
           }
          
           
           
            
            
            
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends
