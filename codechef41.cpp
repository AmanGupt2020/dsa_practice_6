#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int g;
		cin>>g;
		for(int j=0;j<g;j++){
			int i,n,q;
			cin>>i>>n>>q;
		
		int c=0;
		int d=0;
		if(i==2){
			for(int j=0;j<n;j=j+2){
			  	c++;
			}
			for(int j=1;j<n;j=j+2){
				d++;
			}
		}
		else{
			for(int j=0;j<n;j=j+2){
			  	d++;
			}
			for(int j=1;j<n;j=j+2){
				c++;
			}
			
		}
		if(q==1){
			cout<<c<<endl;
		}
		else{
			cout<<d<<endl;
		}
	}
}
	
	
	return 0;
}
