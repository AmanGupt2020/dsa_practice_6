#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[4];
        for(int i=0;i<4;i++)
        {
            cin>>a[i];
        }
        sort(a,a+4);
        cout<<a[3]<<endl;
        
    }
	return 0;
}
