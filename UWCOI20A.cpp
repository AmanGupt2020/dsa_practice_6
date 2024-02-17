#include <iostream>
using namespace std;

int main() {
    // your code goes here
    int t,n,mx,num;
    for(cin>>t;t--;cout<<mx<<endl)
        for(mx=0,cin>>n;n--;mx=max(mx,num))
            cin>>num;
    return 0;
}
