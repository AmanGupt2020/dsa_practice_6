#include<iostream>
using namespace std;
int main() 
{
    int T;
    cin>>T;
    while(T--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a>=b && a>=c)
        {
            if(b+c<a)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else if(b>=a && b>=c)
        {
            if(a+c<b)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
        {
            if(b+a<c)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
    return 0;
}
