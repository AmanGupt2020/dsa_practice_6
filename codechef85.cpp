#include<bits/stdc++.h>
using namespace std;
int fact(int n){
	if(n==1 || n==0){
		return 1;
	}
	return n*fact(n-1);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n=0,r=0;
		int arr[11];
		int k;
		cin>>k;
		for(int i=0;i<11;i++){
			cin>>arr[i];
		}
		sort(arr,arr+11);
		reverse(arr,arr+11);
		for(int i=0;i<11;i++){
			if(arr[i]==arr[k-1]){
				n++;
			}
		}
		for(int i=0;i<k;i++){
			if(arr[i]==arr[k-1]){
				r++;
			}
		}
		cout<<(fact(n)/fact(n-r))/fact(r)<<endl;
	}
	return 0;
}



