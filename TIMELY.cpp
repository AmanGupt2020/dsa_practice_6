#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int x;
	for(int i=0;i<n;i++){
	    cin>>x;
	    if(x>=30){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
