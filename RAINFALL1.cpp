#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--){
	    int a;
	    cin>>a;
	    if(a<3){
	        cout<<"LIGHT"<<endl;
	    }
	    else if(a>=3 && a<7){
	        cout<<"MODERATE"<<endl;
	    }
	    else if(a>=7){
	        cout<<"HEAVY"<<endl;
	    }
	}
	return 0;
}
