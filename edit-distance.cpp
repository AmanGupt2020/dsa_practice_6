//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
     int spaceOpti(string &s1, string &s2)
{
    int n1 = s1.length();
    int n2 = s2.length();

    // if s1 is empty
    if(n1 == 0){
        return n2;
    }

    // if s2 is empty
    if(n2 == 0){
        return n1;
    }

    vector<int> curr(n2 + 1, 0);
    vector<int> next(n2 + 1, 0);

    // base case analysis - 1
    for (int index2 = 0; index2 < n2; index2++)
    {
        next[index2] = n2 - index2;
    }

    for (int index1 = n1 - 1; index1 >= 0; index1--)
    {
        for (int index2 = n2 - 1; index2 >= 0; index2--)
        {
            // base case analysis - 2
            curr[n2] = n1 - index1;

            int answer = 0;
            if (s1[index1] == s2[index2])
            {
                answer = next[index2 + 1];
            }
            else
            {
                int insertAns = 1 + curr[index2 + 1];
                int deleteAns = 1 + next[index2];
                int replaceAns = 1 + next[index2 + 1];

                answer = min(insertAns, min(deleteAns, replaceAns));
            }
            curr[index2] = answer;
        }
        next = curr;
    }
    return next[0];
}
    int editDistance(string s, string t) {
        // Code here
        return spaceOpti(s,t);
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        Solution ob;
        int ans = ob.editDistance(s, t);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends
