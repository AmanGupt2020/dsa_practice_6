//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    long long sequence(int n){
        // code here
        // if(n==1){
        //     return 2;
        // }
        // else{
        //   long long int s=seq(n-1);
        //   int c=n;
        //   long long int m=1;
        //   while(c--){
        //       m*=s;
        //       s++;
        //   }
           
        // }
        long long int mod=1000000007;
        long long int l=2;
        long long ans=0;
        for(int i=2;i<=n;i++){
            long long int c=l;
            long long int L=l+1;
            int j=i;
            //cout<<c<<i<<' ';
            j--;
            while(j--){
                c*=L;
                L++;
                
            }
            l=L;
            ans+=(c+mod)%mod;
        }return ans+1;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.sequence(N)<<endl;
    }
    return 0;
}
// } Driver Code Ends
