#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    if((x==y) && (x>=1 && y>=1))
	    cout<<"Yes"<<endl;
	    else
	    cout<<"No"<<endl;
	}
	return 0;
}
