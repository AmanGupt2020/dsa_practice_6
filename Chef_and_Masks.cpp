#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	 int X,Y;
	 cin>>X>>Y;
	 if(X*100 < Y*10)
	 cout<<"DISPOSABLE"<<endl;
	 else 
	 cout<<"CLOTH"<<endl;
	}
	return 0;
}
