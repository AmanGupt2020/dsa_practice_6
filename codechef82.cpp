#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		int temp;
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		sort(arr,arr+n);
		for(int i=0;i<n-1;i++){
          if(i%2==0){
          	if(arr[i]<=arr[i+1]){
          		continue;
			  }
			  else{
			  	temp=arr[i];
			  	arr[i]=arr[i+1];
			  	arr[i+1]=temp;
			  }
		  }
		  else{
		  	if(arr[i]>=arr[i+1]){
		  		continue;
			  }
			  else{
			  	temp=arr[i];
			  	arr[i]=arr[i+1];
			  	arr[i+1]=temp;
			  }
		  }			
		}
		for(int i=0;i<n;i++){
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
