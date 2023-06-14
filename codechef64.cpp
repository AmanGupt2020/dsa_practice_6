#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s1;
		cin>>s1;
		string s2;
		cin>>s2;
		int f=0;
		for(int i=0;i<s2.size();i++){
			for(int j=0;j<s1.size();j++){
				if(s1[i]==s2[j]){
					f++;
					break;
				}
			}
		}
		cout<<f<<endl;
	}
	return 0;
}
