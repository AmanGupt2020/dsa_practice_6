#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int a,b;
	for(int i=0;i<n;i++){
	    cin>>a>>b;
	    if(a+b<=6){
	        cout<<"NO"<<endl;
	    }
	    else{
	        cout<<"YES"<<endl;
	    }
	}
	return 0;
}
