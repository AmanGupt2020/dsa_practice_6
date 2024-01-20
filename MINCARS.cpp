#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	for(int i = 0; i<n; i++){
	    int f; 
	    cin>>f;
	    if(f % 4 == 0)
	        cout<<(f/4)<<endl;
	    else
	       cout<<(f/4) + 1<<endl; 
	}
	return 0;
}
