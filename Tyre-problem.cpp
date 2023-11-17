#include <iostream>
using namespace std;

int main() {
	int t,i;
	cin >> t;
	int x[t],y[t];
	for(i=0;i<t;i++)
	{
	    cin >> x[i];
	    cin >> y[i];
	}
	
	for(i=0;i<t;i++)
	{
	    cout << 2*x[i] + 4*y[i] << "\n";  
	}
	return 0;
}
