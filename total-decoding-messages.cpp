//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	private:
    int l, MOD = 1e9 + 7;
    vector<int> dp;
    
public:
	int CountWays(string s) {
	
	    this -> l = s.length();
	    dp.resize(l + 1);
	    
	    
	    return decode_ways(s, l);
	}
	
private:
    int decode_ways(string& s, int l) {
        
        if (l == 0)
            return 1;
        
        if (dp[l])
            return dp[l];
        
        int count = 0;
        
        if (s[l - 1] != '0')
            count += decode_ways(s, l - 1) % MOD;
            
        if (l > 1 && stoi(s.substr(l - 2, 2)) >= 10 && stoi(s.substr(l - 2, 2)) <= 26)
            count += decode_ways(s, l - 2) % MOD;
        
        return dp[l] = count % MOD;
    }

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.CountWays(str);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends
