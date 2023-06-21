#include <bits/stdc++.h>
using namespace std;

int main() {
    int m,n,i,id,pop,t;
    string str;
    cin>>n>>m;
    vector<int> cf;
    for(i=0;i<n;i++)
    {
        cin>>t;
        cf.push_back(t);
    }
	map<int, string, greater<>>hamma1;
	map<int, string, greater<>>hamma2;
	for(i=0;i<m;i++)
	{
	  cin>>id>>pop>>str;
	   bool temp = find(cf.begin(), cf.end(), id) != cf.end();
	   if(temp)
	        hamma1.insert({pop,str});
	   else
	        hamma2.insert({pop,str});
	}
	for( auto &b : hamma1)
	    cout<<b.second<<endl;
	for( auto &c : hamma2)
	    cout<<c.second<<endl;
	return 0;
}
