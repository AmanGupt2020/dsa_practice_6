#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		int sum=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			sum=sum+(a[i]/(i+1));
		}
		if(sum%2){
			cout<<"ALICE"<<endl;
		}
		else{
			cout<<"BOB"<<endl;
		}
	}
	
	
	return 0;
}
