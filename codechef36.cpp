#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int len=s.length();
		bool temp= false;
		for(int i=0;i<len/2;i++){
			if(s[i]!=s[len-1-i]){
				temp=true;
				break;
			}
		}
		if(!temp){
			cout<<"wins"<<endl;
			
		}
		else {
			cout<<"loses"<<endl;
		}
	}
	
	
	return 0;
}
