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
        if(a<=c)
        {
            if(b<=c-a)
                cout<<"2"<<endl;
            else
                cout<<"1"<<endl;
        }
        else
            cout<<"0"<<endl;
    }
    return 0;
}
