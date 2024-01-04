//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:	
int distinctSubsequences(string s) {
        // Initialize a variable 'cnt' to 1, 
        //which represents the empty subsequence.
        long long cnt = 1;
        
        // Define the modulo value for
        //preventing integer overflow.
        long long mod = 1e9 + 7;
        
        // Use a map 'm' to store the last 
        //index where each character appeared.
        map<char, long long> m;
        
        // Iterate through each character in the string.
        for (int i = 0; i < s.size(); i++) {
            // Store the current value of 'cnt' 
            //in a temporary variable 'temp'.
            int temp = cnt;
            
            // Update 'cnt' by multiplying it by 2, 
            //subtracting the last index of the current character,
            // and adding the modulo value to prevent overflow.
            cnt = (cnt * 2 - m[s[i]] + mod) % mod;
            
            // Update the last index of the current character in the map 'm'.
            m[s[i]] = temp;
        }
        
        // Return the final count of distinct subsequences.
        return cnt;
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

        Solution ob;
   		cout << ob.distinctSubsequences(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends
