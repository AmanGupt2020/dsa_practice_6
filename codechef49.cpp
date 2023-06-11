#include<iostream>
using namespace std;
int sum(int n){
	int arr[n];
	int s=0;
	for(int i=0;i<n;i++){  
		arr[i]=i+1;  
	}
	for(int i=0;i<n;i++){
		s=s+arr[i];  
	}
	return s;
}
int main(){
	int t;  
	cin>>t; 
	while(t--){
		int d,n;  
		cin>>d>>n;
		int c=0;
		for(int i=0;i<d;i++){  
			 n=sum(n); 
		}
		cout<<n<<endl;
	}
	
	return 0;
}
