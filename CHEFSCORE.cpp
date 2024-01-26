#include <iostream>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
        int n,x,y,flag;
        cin>>n>>x>>y;
        if(y==0) cout<<"YES\n";
        else{
        for(int i=1; i<=n; i++){
            int val=0;
            val = x*i;
            if(val==y){
                flag=1;
                break;
            }
            else flag=0;
        }
        if(flag==1) cout<<"YES\n";
        else cout<<"NO\n";
        }
    }
    
	return 0;
}
