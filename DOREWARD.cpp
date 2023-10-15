#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    if(n<=3){
	        cout<<"BRONZE"<<endl;
	    }
	    else if(n>3 && n<=6){
	        cout<<"SILVER"<<endl;
	    }
	    else{
	        cout<<"GOLD"<<endl;
	    }
	}
	return 0;
}
