#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,z,sum;
	    cin>>x>>y>>z;
	    sum=(x+y+z);
	    if(sum>1){
	        cout<<"Not now"<<endl;
	    }
	    else{
	        cout<<"Water filling time"<<endl;
	    }
	}
	return 0;
}
