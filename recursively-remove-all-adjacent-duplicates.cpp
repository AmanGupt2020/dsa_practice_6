//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
public:
     string rremove(string s)
    {
        bool flag=false;
        int i=0;
        string res="";
        while(i<s.size())
        {
            if(s[i]!=s[i+1])
            {
                res+=s[i];
                i++;
            }
            else
            {
                while(s[i]==s[i+1])
                    i++;
                    i++;
                    flag=true;
            }
        }
        if(flag==true)
        return rremove(res);
        else
        return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);
        Solution ob;
        cout << ob.rremove(s) << "\n";
    }
    return 0;
}
// } Driver Code Ends
