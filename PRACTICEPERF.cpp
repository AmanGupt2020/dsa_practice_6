#include <iostream>
using namespace std;

int main() {
    int s=0;
    
	for(int i=0;i<4;i++){
	    int a;
	    cin>>a;
	    if(a>=10){
	        s++;
	    }
	}
	cout<<s<<endl;
	return 0;
}
