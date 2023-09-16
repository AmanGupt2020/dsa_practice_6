#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--){
	    int a;
	    cin>>a;
	    if(a<=70){
	        cout<<"0"<<endl;
	    }
	    else if(a>70 && a<=100){
	        cout<<"500"<<endl;
	    }
	    else if(a>100){
	        cout<<"2000"<<endl;
	    }
	}
	return 0;
}
