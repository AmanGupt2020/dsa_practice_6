#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int x;
	for(int i=0;i<n;i++){
	    cin>>x;
	    if(x>=67 && x<=45000){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
