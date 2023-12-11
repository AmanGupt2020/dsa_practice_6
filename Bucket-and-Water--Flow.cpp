#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int X,Y,W,Z;
	    cin>>W>>X>>Y>>Z;
	    if(W + Y * Z == X){
	        cout<<"filled"<<endl;
	    }
	    else if(W + Y * Z > X){
	        cout<<"overflow"<<endl;
	    }
	    else{
	        cout<<"Unfilled"<<endl;
	    }
	}
	return 0;
}
