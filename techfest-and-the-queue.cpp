//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution {
public:
    int countOfPrimeFactors(int n)
    {
        int cnt =0;
        if (n<=1)
            return 0;
        while(n%2==0)
        {
            cnt++;
            n=n/2;
        }
        while(n%3==0)
        {
            cnt++;
            n=n/3;
        }
        for(int i=5;i*i<=n;i=i+6)
        {
            while(n%i==0)
            {
                cnt++;
                n=n/i;
            }
            while(n%(i+2)==0)
            {
                cnt++;
                n=n/(i+2);
            }
        }
        if(n>3)
            cnt++;
        return cnt;
    }
	int sumOfPowers(int a, int b){
	    // Code here
	    int sum = 0;
	    for(int i=a;i<=b;i++)
	        sum += countOfPrimeFactors(i);
	    return sum;
	}
};


//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int a, b;
		cin >>  a >> b;
		Solution obj;
		int ans = obj.sumOfPowers(a, b);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends
