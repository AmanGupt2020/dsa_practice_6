//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        int start=-1;
    int n=S.length();
    for (int i=0;i<n;i++) {
        if (start==-1 && S[i]!='.') { 
            start=i;
        } else if (start!=-1 && S[i]=='.') { //i-1 will be the end point
            //Then, we can reverse this word
            reverse(S.begin()+start, S.begin()+i);
            //after that, simply reset start, end
            start=-1;
        }
    }
    //reverse the last word, if exists 
    if (start!=-1)
        reverse(S.begin()+start, S.end());
    
    //reverse the entire string 
    reverse(S.begin(), S.end());
    
    return S;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends
