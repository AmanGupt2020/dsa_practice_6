#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int arr[9];
		int m=0;
		int n=9;
		for(int i=0;i<=9;i++){
			cin>>arr[i];
			if(arr[i]<n && i!=0){
				n=arr[i];
				m=i;
			}
		}
		if(arr[0]<n){
			m=0;
			n=arr[0];
			cout<<1<<endl;
		}
		for(int i=0;i<=n;i++){
			cout<<m;
		}
		cout<<endl;
	}
	
	return 0;
}


