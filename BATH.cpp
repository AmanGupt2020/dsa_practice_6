#include <iostream>
#include <cmath>
using namespace std;

void f()
{
    int x,y;
    cin >> x >> y;
    cout << x/(2*y) << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    f();
	}
	return 0;
}
