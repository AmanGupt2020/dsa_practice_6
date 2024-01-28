#include <iostream>
using namespace std;

int main() {
	int T,X,Y;
	cin>>T;
	while(T--)
	{
	    cin>>X>>Y;
	    if(X>10*Y)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
