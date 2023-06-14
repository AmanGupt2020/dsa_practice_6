#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int len=s.size();
		string s1="101";
		string s2="010";
		int a1=s.find(s1);
		int a2=s.find(s2);
		if((a1>=0 && a1<len) || (a2>=0 && a2<len)){
			cout<<"Good"<<endl;
		}
		else{
			cout<<"Bad"<<endl;
		}
	}
	
	
	return 0;
}
