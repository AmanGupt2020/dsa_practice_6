#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    float a,b,c,d;
	    cin>>a>>b>>c>>d;
	    if((a/c)<(b/d))
	    {
	        cout<<"chef"<<endl;
	    }
	    else if((a/c)>(b/d))
	    {
	        cout<<"chefina"<<endl;
	    }
	    else if((a/c)==(b/d))
	    {
	        cout<<"both"<<endl;
	    }
	}

}
