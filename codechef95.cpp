#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		int sum=0;
		int arr[a+1];
		
		for(int i=1;i<a+1;i++){
			cin>>arr[i];
		}
		int brr[a+1]={0};
		for(int i=1;i<a+1;i++){
			brr[arr[i]]++;
		}
		for(int i=1;i<a+1;i++){
			if(brr[i]>=b && arr[i]!=i){
				sum++;
			}
		}
		cout<<sum<<endl;
		
	}
return 0;	
}



