//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    int findFloor(vector<long long> v, long long n, long long x){
        
        // Your code here
        int ans = -1;
        for(int i=0;i<n;i++)
        {
            if(v[i]==x || v[i]<x)
            {
                ans = i;
                continue;
            }
            else if(v[i]>x)
            {
                break;
                return ans;
            }
        }
        return ans;
        
    }
};


//{ Driver Code Starts.

int main() {
	
	long long t;
	cin >> t;
	
	while(t--){
	    long long n;
	    cin >> n;
	    long long x;
	    cin >> x;
	    
	    vector<long long> v;
	    
	    for(long long i = 0;i<n;i++){
	        long long temp;
	        cin >> temp;
	        v.push_back(temp);
	    }
	    Solution obj;
	    cout << obj.findFloor(v, n, x) << endl;
	   
	}
	
	return 0;
}
// } Driver Code Ends
