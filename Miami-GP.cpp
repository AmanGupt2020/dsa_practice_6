#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int x,y,t;   
	std::cin >> t;
	while(t--){
	    std::cin >> x>>y;
	    if(x*1.07>=y){
	        std::cout << "yes" << std::endl;
	    }
	    else{
	        std::cout << "No" << std::endl;
	    }
	}
	
	
	return 0;
}
