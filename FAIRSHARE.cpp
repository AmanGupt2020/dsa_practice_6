#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        int d=a/(b+1);
        int p=d*(b);
        cout<<a-p<<endl;
    }
return 0;
}
