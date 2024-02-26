#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int chefRoom,chefinaRoom;
        cin>>chefRoom>>chefinaRoom;
        
        if(chefRoom%10 != 0 && chefinaRoom%10 != 0)
        {
            cout<<abs(((chefRoom/10)+1)-((chefinaRoom/10)+1));
        }
        else if(chefRoom%10 == 0 && chefinaRoom%10 != 0)
        {
            cout<<abs(((chefinaRoom/10)+1) - (chefRoom/10));
        }
        else if(chefRoom%10 != 0 && chefinaRoom%10 == 0)
        {
            cout<<abs(((chefRoom/10)+1) - (chefinaRoom/10));
        }
        else
        {
            cout<<abs((chefinaRoom/10)-(chefRoom/10));
        }
        cout<<endl;
    }
    return 0;
}
