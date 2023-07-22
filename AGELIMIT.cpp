#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int x,y,z;
	for(int i=0;i<n;i++){
	    cin>>x>>y>>z;
	    if(z>=x && z<y){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
