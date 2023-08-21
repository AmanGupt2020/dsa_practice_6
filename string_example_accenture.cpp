#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int i=0;
	int m=0;
	string s2="";
	for(int i=0;i<s.size();i++){
		if(isupper(s[i])){
			s[i]=tolower(s[i]);
			s2=s2+s[i];
		}
		else if(islower(s[i])){
			s[i]=toupper(s[i]);
			s2=s2+s[i];
		}
	}
//	cout<<s2<<endl;
	
	string s3="";
	while(isupper(s2[i])){
		s3=s3+s2[i];
		m++;
		i++;
	}
	cout<<s3<<endl;
	
	for(int i=m;i<s2.size();i++){
		int t=0;
		string s4="";
		while(islower(s2[i+t]) && isupper(s2[i+t+1]) || isupper(s2[i+t]) && isupper(s2[i+t+1])){
			
			
			s4=s4+s2[i+t];
			t++;
		}
		s4=s4+s2[i+t];
		cout<<s4<<endl;
		
		i=i+t;
		
	}
	
	return 0;
}
