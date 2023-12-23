//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    long long countWays(int n)
    {
        
        int mod = 1e9 + 7;
        long long a = 1, b = 2, c = 4;
        
        if(n == 1)
            return a;
        if(n == 2)
            return b;
        if(n == 3)
            return c;
            
        long long sum = 0;
        int i = 4;
        while(i <= n){
            sum = (a + b + c);
            sum = sum%mod;
            a = b;
            b = c; 
            c = sum;
            i++;
        }
        
        return (c+ mod)%mod;
        
    }
};


//{ Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin >> t;
	
	while(t--)
	{
	    //taking number of steps in stair
		int n;
		cin>>n;
		Solution ob;
		//calling function countWays()
		cout << ob.countWays(n) << endl;
	}
    
    return 0;
    
}

// } Driver Code Ends
