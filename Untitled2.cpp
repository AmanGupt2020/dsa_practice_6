#include<iostream>
using namespace std;
bool isPrime(int n){
	
	for(int i=2;i<n;i++){
		if(n<2) return false;
		if(n%i==0){
			cout<<"did not find"<<endl;
			return false;
		}
	}
	return true;
}

int main(){
	int arr[4];
	for(int i=0;i<5;i++){
      cin>>arr[i];
	  if( isPrime( arr[i]) ){
	  	cout<<arr[i]<<endl;
	  }	
		
	}
	
	return 0;
}
