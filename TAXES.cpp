#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int x;
	for(int i=0;i<n;i++){
	    cin>>x;
	    if(x>100){
	        cout<<x-10<<endl;
	    }
	    else{
	        cout<<x<<endl;
	    }
	}
	return 0;
}
