#include<bits/stdc++.h>
using namespace std;

#define cn cout<<"NO"<<endl
#define cy cout<<"YES"<<endl
#define int long long int
#define mod 1000000007
#define loop(i,n) for(int i=0;i<n;i++)
#define pb push_back

void solve(){
    int n,age;
    cin>>n>>age;
    int a[n];
    loop(i,n) cin>>a[i];
    int ct=0;
    loop(i,n) if(a[i]>=age) ct++;
    cout<<ct<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--){solve();}
}
