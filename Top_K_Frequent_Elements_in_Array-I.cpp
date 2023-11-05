//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  static bool cmp(pair<int,int>a , pair<int,int>b){
        if(a.second==b.second) return a.first > b.first;
    return (a.second > b.second);
    }
    vector<int> topK(vector<int>& nums, int k) {
        // Code here
         vector<int> output;
      unordered_map<int,int> mp;
      for(int i=0;i<nums.size();i++)
      mp[nums[i]]++;
      
      vector<pair<int,int>> vec(mp.begin(),mp.end());
      
      sort(vec.begin(),vec.end(),cmp);
      
      int i=0;
      while(i<k){
      output.push_back(vec[i].first);
      i++;
      }
      
      return output;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (auto &i : nums) cin >> i;
        int k;
        cin >> k;
        Solution obj;
        vector<int> ans = obj.topK(nums, k);
        for (auto i : ans) cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends
