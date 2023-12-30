#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,y;
	std::cin >> t;
	while(t--){
	    std::cin >> x>>y;
	   // if(x*y>=100)
	   // {
	        
	   // std::cout << (x*y)/100 << std::endl;
	   // }
	   // else{
	   //     std::cout << 0 << std::endl;
	   // }
	   std::cout << x*y/100 << std::endl;
	}
	return 0;
}
