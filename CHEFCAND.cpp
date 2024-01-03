#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,n;
	    cin>>x>>n;
	    if(x>n){
	        if((x-n)%4!=0){
	        cout<<((x-n)/4)+1<<endl;
	        }
	        else{
	        cout<<(x-n)/4<<endl;
	    }
	    }
	    else{
	        cout<<"0"<<endl;
	    }
	}
	return 0;
}
