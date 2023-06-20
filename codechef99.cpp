#include<iostream>
using namespace std;
int main(){
	int n,q;
	cin>>n>>q;
	int a[n];
	int b[n];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		cin>>b[i];
	}
	for(int i=1;i<=q;i++){
		int sum=0;
		int l,r;
		cin>>l>>r; 
		for(int j= l;j<=r;j++){ 
			sum=sum+(a[i]*b[i]); 
		}
		cout<<sum<<endl;
		
	}
	return 0;
}
