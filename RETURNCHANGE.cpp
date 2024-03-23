#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;  cin>>t;
    while(t--){
        int x; cin>>x;
        int q = x/10;
        int r = x%10;
        if(r<5){
            cout<<100-(q*10)<<endl;
        }
        else{
            cout<<100-((q+1)*10)<<endl;
        }
    }
    return 0;
}
