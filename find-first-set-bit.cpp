//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    unsigned int getFirstSetBit(int n)
    {
        int ans=1;
        if(n==0){
            return 0;
        }
        while(n){
            if((n&1)==1){
                return ans;
            }
            ans++;
            n=n>>1;
        }
        return ans;
    }
};

//{ Driver Code Starts.

// Driver code
int main()
{
    int t;
    cin>>t; // testcases
    while(t--)
    {
        int n;
        cin>>n; //input n
        Solution ob;
        printf("%u\n", ob.getFirstSetBit(n)); // function to get answer
    }
	return 0;
}

// } Driver Code Ends
