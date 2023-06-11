#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		double d=n*m;
		if(n>1000){
			
			cout<<d-0.1*d<<endl;
		}
		else{
			cout<<d<<endl;
		}
		
		
	}
return 0;
}
