#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;    
	int arr[3];
	while(t--){
	for(int i=0;i<3;i++){
		cin>>arr[i];
	}
	int n=sizeof(arr)/sizeof(arr[0]);
	sort(arr,arr+n);
     cout<<arr[1]<<endl;	
	
}	
	
	
		
		
	
	
	
	
	
	return 0;
}
