#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T!=0){
	    int X;
	    cin >> X;
	    int min_incorrect=0;
	    if(X%3==1){
	        min_incorrect=2;
	        cout << min_incorrect;
	    }
	    else if(X%3==2){
	        min_incorrect=1;
	        cout << min_incorrect;
	    }
	    else if(X%3==0){
	        min_incorrect=0;
	        cout << min_incorrect;
	    }
	    T--;
	    cout << endl;
	}
	return 0;
}
