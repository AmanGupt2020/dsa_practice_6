#include <iostream>
using namespace std;

int main() {
	int t; cin>>t; 
	while(t--){
	    int x,y; cin>>x>>y;
	    cout<<min(2*y+x, min(5*x, y+3*x))<<endl;
	}
	return 0;
}
