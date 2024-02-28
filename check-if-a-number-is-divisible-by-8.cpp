//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int DivisibleByEight(string s){
        long long int num=0;
        for(int i=0;i<s.size();i++){
            char ch=s[i];
            int n=int(ch - '0');
            num=num*10+n;
        
        }
        
        if(num%8==0){
        return 1;
            
        }
        else{
           return -1; 
        } 
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.DivisibleByEight(S)<<"\n";
    }
}
// } Driver Code Ends
