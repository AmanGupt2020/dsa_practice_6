#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(b-d>a-c)
        cout<<"First"<<endl;
        else if(b-d<a-c)
        cout<<"Second"<<endl;
        else
        cout<<"Any"<<endl;
    }
    return 0;
}
