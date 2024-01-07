using namespace std;

void solve()
{
    int t1, t2, t3;
    cin>>t1>>t2>>t3;
    if(t2>= t1 && t2>=t3)cout<<"Yes\n";
    else cout<<"No\n";
}

int main()
{
    int test;
    cin>>test;
    while(test--)solve();

    return 0;
}
