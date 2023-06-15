#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;  
	int arr[t];
	int t1;
	int sum1=0;
	int sum2=0;
	for(int i=1;i<=t;i++){  
		sum1=sum1+i;
	}
	for(int i=0;i<t;i++){  
		cin>>arr[i];   
		sum2=sum2+arr[i];  
	}
	if(sum1=sum2){
		cout<<"YES"<<endl;
		
	}
	else{
		cout<<"N0"<<endl;
	}
	return 0;
}
