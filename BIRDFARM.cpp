#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int X, Y, Z;
	    cin>>X>>Y>>Z;
	    if(Z%X==0 && Z%Y==0)
	    {
	        cout<<"ANY"<<endl;
	    }
	    else if(Z%X!=0 && Z%Y!=0)
	    {
	        cout<<"NONE"<<endl;
	    }
	    else if(Z%X==0)
	    {
	        cout<<"CHICKEN"<<endl;
	    }
	    else{
	        cout<<"DUCK"<<endl;
	    }
	}
	return 0;
}
