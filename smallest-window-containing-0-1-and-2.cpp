//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int smallestSubstring(string S) {
        // Code here
        
        int res=S.size()+1;
        
        int zero=-1,one=-1,two=-1;
        for(int i=0;i<S.size();i++){
            if(S[i]=='1')
                one=i;
            else if(S[i]=='2')
                two=i;
            else
                zero=i;
            
            if(zero!=-1 && one!=-1 && two!=-1)
                res = min(res,(max(one,max(two,zero)) - min(one,min(two,zero)))+1);
        }
        
        return res>S.size() ? -1 : res;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.smallestSubstring(S);
        cout << endl;
    }
}
// } Driver Code Ends
