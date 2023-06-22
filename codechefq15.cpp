#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	int arr[t]; 
	for(int i=0;i<t;i++){
		cin>>arr[i];
	}
	int size= sizeof(arr)/sizeof(int);
	sort(arr,arr+size);
	for(int i=0;i<t;i++){
		cout<<arr[i]<<endl;
	}
	return 0;
}
