#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0; i<t; i++)
	{
	    int a, b, c;
	    cin>>a>>b>>c;
	    int n=a/3;
	    if(a<=3)
	    {
	        cout<<a*b<<endl;
	    }else if((a>3) && (a%3!=0))
	    {
	        cout<<(a*b)+n*c<<endl;
	    }else
	    {
	        cout<<(a*b)+(n-1)*c<<endl;
	    }
	}
	return 0;
}
