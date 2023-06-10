#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;  
	while(t--){
		int num;
		cin>>num;
		int n=0;
		int mod=0;
		n=num/100; 
		mod=num%100;
		n=n+mod/50;
		mod=mod%50;
		n=n+mod/10;
		mod=mod%10;
		n=n+mod/5;
		mod=mod%5;
		n=n+mod/2;
		mod=mod%2;
		n=n+mod/1;
		mod=mod%1;
	cout<<n<<endl;	
		
	}
	
	
	
	
	
	
	
}
