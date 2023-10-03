#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--){
	    int a;
	    cin>>a;
	    if(a<=300){
	        cout<<300*10<<endl;
	    }
	    else{
	        cout<<a*10<<endl;
	    }
	}
	return 0;
}
