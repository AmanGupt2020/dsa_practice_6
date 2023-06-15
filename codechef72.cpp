#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int num;
		cin>>num;
		int i=1;
	    while(i<=num){
	    	i=i*2;
		}
		cout<<i/2<<endl;	
	}
	return 0;
}
