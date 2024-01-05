//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
     int countBits(int N, long long int A[])
    {
        //code here
        // long long int ans = 0, modulo = 1e9+7;

        // for(int j=0; j<32; j++){
        //     int ones = 0;
        //     for(int i=0; i<N; i++){
        //         if(A[i] & (1<<j))
        //             ones++;
        //     }
        //     ans = (ans + ((N-ones)*ones*2))%modulo;
        // }
        
        // return ans%modulo;
        
        int mod=1e9+7; 
        int mask=1;
        int ans=0;
        for(int i=0;i<32;i++){   //mask at diffrent position int so 32
            long long int group1=0;  //grouping according to mask
            long long int group2=0;
            for(int j=0;j<N;j++){
                if(A[j]&(mask)){
                    group1++;
                }
                else{
                    group2++;
                }
            }
            mask=mask<<1;
            ans=(ans+(group1*group2*2))%mod;  //*2 as (a,b) pair                                                                 //satisfy then 
                                                //(b,a) also satisfy.
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        long long int A[N];
        for(int i = 0;i < N; i++)
            cin>>A[i];
        
        Solution ob;
        cout<<ob.countBits(N, A)<<"\n";
    }
    return 0;
}
// } Driver Code Ends
