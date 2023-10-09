#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--){
	    int a;
	    cin>>a;
	    if(a>=4 && a<7){
	        cout<<"MEDIUM"<<endl;
	    }
	    else if(a<4){
	        cout<<"MILD"<<endl;
	    }
	    else if(a>=7){
	        cout<<"HOT"<<endl;
	    }
	}
	return 0;
}
