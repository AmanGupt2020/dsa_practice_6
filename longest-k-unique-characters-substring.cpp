//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
       int i=0,j=0;
       int n=s.size();
       unordered_map<char,int>m;
       int len=0;
       int ct=0;
       while(j<n)
       {
           m[s[j]]++;
           if(m[s[j]]==1)ct+=1;
           if(ct<k)
           {
               j++;
               
           }
           else if(ct==k)
           {
               len=max(len,j-i+1);
               j++;
           }
           else if(ct>k)
           {
               while(ct>k)
               {
                m[s[i]]-=1;
                
                 if(m[s[i]]==0)ct--;
                 i++;
               }
               j++;
           }
       }
       if(len>=k)return len;
       else return -1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends
