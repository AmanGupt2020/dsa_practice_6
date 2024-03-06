//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        vector <int> search(string pattern, string text)
        {
            int j=pattern.size();
            int n=text.size();
            int k=0;
            vector<int>ans;
            for(int i=0;i<n;i++){
                if(text[i]==pattern[k]){
                    int c=i;
                    while(k<j){
                        if(text[c]==pattern[k]){
                            c++;k++;
                        }
                        else {
                            k=0;
                            break;
                        }
                        }
                    }
                    // cout<<k<<" "<<i;
                    if(k==j){

                    
                    ans.push_back(i+1);}
                    k=0;
                }
                return ans;
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
        for (int i : res) cout << i << " ";
        cout << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends
