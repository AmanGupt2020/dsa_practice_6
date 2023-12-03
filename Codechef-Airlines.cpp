#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	 int X,Y,Z;
	 cin>>X>>Y>>Z;
	 if(10*X >= Y)
	 cout<<(Y*Z)<<endl;
	 else
	 cout<<(10*X*Z)<<endl;
	}
	return 0;
}
