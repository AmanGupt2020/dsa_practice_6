#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n;
        if(n>=2)
        {
            if(n%2!=0)
            {
               k=(n/2)+1; 
            }
            else
            {
                k=n/2;
            }
            cout<<k<<" "<<n<<'\n';
        }
        else
        {
            cout<<n<<" "<<n<<'\n';
        }
    }
}
