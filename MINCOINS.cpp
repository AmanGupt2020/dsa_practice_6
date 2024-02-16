#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(0);
    int t; cin>>t;
    while(t--)
    {
        int x; cin>>x;
        if(x%5!=0)
        {cout << "-1\n";}
        else
        {
            int notes = x/10;
            if(x%10!=0) notes++;
            cout << notes <<'\n';
        }
    }
    return 0;
}
