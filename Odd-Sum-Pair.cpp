#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int num[3];
    int odd=0, even=0;
    for(int i=0; i<3; i++)
    {
        cin>>num[i];
        if(num[i]%2==0) even++;
        else odd++;
    }
    if(odd==3) cout<<"NO\n";
    else if(odd==2) cout<<"YES\n";
    else if(odd==1) cout<<"YES\n";
    else cout<<"NO\n";
    
}

int main()
{
    int test;
    cin>>test;
    while(test--) solve();
    return 0;
}
