#include <iostream>
using namespace std;

int main() {
	int x;
	cin>>x;
	int n,m;
	for(int i=0;i<x;i++){
	    cin>>n>>m;
	    if(n>m){
	        cout<<n-m<<endl;
	    }
	    else{
	        cout<<"0"<<endl;
	    }
	}
	return 0;
}
