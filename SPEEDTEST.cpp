#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    float a,x,b,y;
	    float c,d;
	    cin>>a>>x>>b>>y;
	    c=a/x;
	    d=b/y;
	    if(c<d)
	    {
	        cout<<"Bob"<<endl;
	    }
	    else if(c==d)
	    {
	        cout<<"Equal"<<endl;
	    }
	    else
	    {
	        cout<<"Alice"<<endl;
	    }
	}
	return 0;
}
