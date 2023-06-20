#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int bar,mal,real,eib;
		for(int i=0;i<4;i++){
			string s;
			int n;
			cin>>s>>n;
			if(s=="Barcelona"){
				bar=n;
			}
			if(s=="Malaga"){
				mal=n;
			}
			if(s=="RealMadrid"){
				real=n;
			}
			if(s=="Eibar"){
				eib=n;
			}
		}
		if(real<mal && bar>eib){
			cout<<"Barcelona"<<endl;
		}
		else{
				cout<<"RealMadrid"<<endl;
		}
	}
	return 0;
}
