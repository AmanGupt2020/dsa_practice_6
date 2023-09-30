#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--){
	    int a,b;
	    cin>>a>>b;
	    if(a>=b){
	        cout<<7-a<<endl;
	    }
	    else{
	        cout<<7-b<<endl;
	    }
	}
	return 0;
}
