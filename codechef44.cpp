#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int n=s.length();
		string start,end;
		for(int i=0;i<n/2;i++){
			start=start+s[i];
			end=end+s[n-1-i];
		}
		sort(start.begin(),start.end());
		sort(end.begin(),end.end());
		if(start==end){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
