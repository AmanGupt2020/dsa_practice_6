#include <iostream>
using namespace std;

int main() {
	
	double a,b,t;
	double c;
	cin >> t;

    while(t--)
	{
	    cin >> a >> b >> c;

        double avg = (a+b) / 2;

      	if(avg > c )
     	 cout << "YES\n";
    	else
	     cout << "NO\n";
	}
	
	return 0;
}
