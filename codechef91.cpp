#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		int c=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			if(a[i]==1){
				c++;
			}
		}
		if(c%2==0){
			cout<<n-c<<endl;
		}
		else{
			cout<<c<<endl;
		}
		
	}
	return 0;
}

