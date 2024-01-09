//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
         vector <int> search(string pat, string txt)
        {
            //code here
            int i = 1, j = 0, n = txt.size(), m = pat.size();
            vector<int> v (m,0), r;
            while(i < m){
                if(pat[i] == pat[j]){
                    v[i++] = ++j;
                }
                else if(j){
                    j = v[j-1];
                }
                else{
                    v[i++] = 0;
                }
            }
            i = 0;
            j = 0;
            while(n-i >= m-j){
                if(pat[j] == txt[i]){
                    i++;
                    j++;
                }
                if(j == m){
                    r.push_back(i-j+1);
                    j = v[j-1];
                }
                else if(i < n && j < m && pat[j] != txt[i]){
                    if(j){
                        j = v[j-1];
                    }
                    else{
                        i++;
                    }
                }
            }
            return r;
        }
     
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector <int> res = ob.search(pat, S);
        if (res.size()==0)
            cout<<-1<<endl;
        else {
            for (int i : res) cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends
