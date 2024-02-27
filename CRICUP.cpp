#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y,z,d;
	    cin>>x>>y>>d;
	    z=abs(x-y);
	    if(z<=d)
	    std::cout << "YES" << std::endl;
	    else
	    std::cout << "NO" << std::endl;
	}
	return 0;
}
