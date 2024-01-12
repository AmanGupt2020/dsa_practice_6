#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, a ,b;
	cin>>t;
	while(t--){
	   cin>>a>>b;
	    float c = a*10;
	    float d = b*5;
	    if(c>d){
	        cout<<"first"<<endl;
	    }
	    else if(d>c){
	        cout<<"second"<<endl;
	    }
	    else{
	        cout<<"any"<<endl;
	    }
	    
	}
	return 0;
}
