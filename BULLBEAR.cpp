#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--){
	    int a,b;
	    cin>>a>>b;
	    if(a>b){
	        cout<<"LOSS"<<endl;
	    }
	    else if(a==b){
	        cout<<"NEUTRAL"<<endl;
	    }
	    else{
	        cout<<"PROFIT"<<endl;
	    }
	    
	    
	}
	return 0;
}
