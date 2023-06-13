#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		if(n==1){
			cout<<"1"<<endl;
		}
		else{
		int count =1;
		int min=arr[0];
		for(int i=1;i<n;i++){
			if(arr[i]<=min){
				count++;
			}
			if(arr[i]<min){
				min=arr[i];
			}
		}
		cout<<count<<endl;
	}
}
	return 0;
}
