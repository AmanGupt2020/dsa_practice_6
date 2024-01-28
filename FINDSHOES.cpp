#include <iostream>
using namespace std;

int main() {
	int t ;
	cin>>t;
	while(t){
	    int n,m;
	    cin>>n>>m;
	  if(n==m)
	  {
	   cout<<n<<endl;
	  }
	   else if (m<n)
	   
	     cout<<2*n-m<<endl;  
	   
	   else if(m>n)
	       
	   cout<<n<<endl;
	  
	   
	   
	   
	    
	    t--;
	}
	return 0;
}
