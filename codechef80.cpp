#include<iostream>
using namespace std;
int palon(int n){
	int temp=n;
	int sum=0;
	int r;
	while(n>0){
		r=n%10; 
		sum=sum*10+r; 
		n=n/10; 
	}
	if(sum==temp){
		return temp;
	}
	return 0;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int m;
		int n;
		cin>>m;
		cin>>n;
		int sum=0;
		for(int i=m;i<=n;i++){
			int l=palon(i);
			sum=sum+l;
		}
		cout<<sum<<endl;
	}
	
	return 0;
}
