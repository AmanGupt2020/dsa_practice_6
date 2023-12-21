#include <iostream>
using namespace std;

int main() {
    int n,i,x;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        if(x<15 || x==15)
        {
            cout<<"Yes\n";
        }
        else
        {
            cout<<"No\n";
        }
    }
	// your code goes here
	return 0;
}
