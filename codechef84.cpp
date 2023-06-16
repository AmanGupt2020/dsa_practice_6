#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(n%7==0){
			cout<<n<<endl;
		}
		else{
			while(n>0){
				n=n-4;
				if(n%7==0){
					cout<<n<<endl;
					break;
				}
			}
			if(n%7!=0){
				cout<<-1<<endl;
			}
		}
	}
	
	return 0;
}
