#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--){
	    int x,y;
	    cin>>x>>y;
	    if(x>=y){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
