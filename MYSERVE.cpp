#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	
	while (t--)
	{
	    int p,q;
	    cin>>p>>q;
	    
	    int s = (p+q);
	    
	  if (s%4 == 0 || s%4 == 1)
	  {
	      cout<< "Alice"<<endl;
	  }
	  else 
	  {
	      cout<< "Bob"<<endl;
	  }
	  
	}
	return 0;
}
