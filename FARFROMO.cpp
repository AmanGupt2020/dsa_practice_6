#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int x1,y1,x2,y2;
	    cin>>x1>>y1>>x2>>y2;
	    int a=(x1*x1 + y1*y1);
	    int b=(x2*x2 + y2*y2);
	    if(a>b) cout<<"Alex"<<endl;
	    else if(a<b)cout<<"Bob"<<endl;
	    else cout<<"Equal"<<endl;
	    
	}
	return 0;
}
