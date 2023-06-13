#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long long int num;
	    cin>>num;
	    if(num%4==1){
	        cout<<"BOB"<<endl;
	    }
	    else{
	        cout<<"ALICE"<<endl;
	    }
	}
	return 0;
}
