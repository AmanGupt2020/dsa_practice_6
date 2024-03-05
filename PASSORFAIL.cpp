#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x,p,c;
	    cin>>n>>x>>p;
	    c=((x*3)-(n-x));
	    if(c>=p)
	    {
	        cout<<"pass"<<endl;
	    }
	    else
	    {
	        cout<<"fail"<<endl;
	    }
	}
	return 0;
}
