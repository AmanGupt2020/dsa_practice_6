//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
     bool canPair(vector<int> nums, int k) {
        // Code here.
        int n = nums.size();
        unordered_map<int,int> mp;
        for(auto it : nums) mp[it%k]++;
        if(k&1){ // k is odd
            for(int i=0;i<=k/2;i++){
                if(i==0){
                    if(mp[0]%2==1) return false;
                    continue;
                }
                if(mp[i]!=mp[k-i]) return false;
            }
        }
        else{
            for(int i=0;i<=k/2;i++){
                if(i==0){
                    if(mp[0]%2==1) return false;
                    continue;
                }
                if(i==(k/2)){
                    if(mp[i]%2==1) return false;
                    continue;
                }
                if(mp[i]!=mp[k-i]) return false;
            }
        }
        return true;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++) cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
}
// } Driver Code Ends
