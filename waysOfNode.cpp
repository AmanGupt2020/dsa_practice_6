#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int count=0;
	for(int i=0;i<n-1;i++){
		
		for(int j=i+1;j<n;j++){
			
			
			
			
				int a=arr[i]^arr[j];
				int b=arr[i]&arr[j];
				if(a>b){
				    count++;
				    
				}
				
			
		
		}
	}
	cout<<count<<endl;
	
	
	
	return 0;
}
