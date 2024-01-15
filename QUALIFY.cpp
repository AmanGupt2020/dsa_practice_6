#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,a,b;
	    cin>>x>>a>>b;
	    if(a*1+b*2>=x)
	     cout<<"qualify"<<endl;
	    else
	     cout<<"notqualify"<<endl;
	}
	return 0;
}
