#include<iostream>
#include<string>
using namespace std;
int main(){
	int t;
	cin>>t;
	string s;
	
	
	while(t--){
		cin>>s;
	      int c=0;	
		for(int i=0;i<s.size();i++){
			if(s[i]=='A'){
				c=c+1;
			}
			else if(s[i]=='B'){
				c=c+2;
			}
			else if(s[i]=='D'){
				c=c+1;
			}
			else if(s[i]=='O'){
				c=c+1;
			}
			else if(s[i]=='P'){
				c=c+1;
			}
			else if(s[i]=='Q'){
				c=c+1;
			}
			else if(s[i]=='R'){
				c=c+1;
			}
			else{
				
			}
		}
		cout<<c<<endl;
	}
	
	
	return 0;
}
