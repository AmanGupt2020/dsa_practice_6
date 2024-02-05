#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a,b,c;
        cin>>a>>b>>c;
        if(b/a<=c){
            cout<<c-(b/a)<<endl;
        }
        else{
            cout<<"0"<<endl;
        }
    }
return 0;
}
