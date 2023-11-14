//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	 void solve(set<string> &ans,string s,int i)
	    {
	        if(i==s.size())
	        {
	            ans.insert(s);
	            return;
	        }
	        for(int j=i;j<s.size();j++)
	        {
	            swap(s[j],s[i]);
	            solve(ans,s,i+1);
	            swap(s[j],s[i]);
	        }
	    }
		vector<string>find_permutation(string S)
		{
		    // Code here there
		     set<string> s;
		    solve(s,S,0);
		    return vector<string>(s.begin(),s.end());
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    sort(ans.begin(),ans.end());
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends
