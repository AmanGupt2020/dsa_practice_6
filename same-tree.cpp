
class Solution{
	public:
		vector<string> AllPossibleStrings(string s){
		    // Code here
		    vector<string>ans;
		    int n=s.size();
		    for(int i=1;i<(1<<n);i++)
		    {
		        string str="";
		        for(int j=0;j<n;j++)
		        {
		            if(i&(1<<j))
		            {
		                str+=s[j];
		            }
		        }
		        ans.push_back(str);
		    }
		   sort(ans.begin(),ans.end());
		    return ans;
		}
};
