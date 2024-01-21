#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0) ;
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    int ans;
	    if((n*x)%4==0) ans=(n*x)/4;
	    if((n*x)%4!=0) ans=(n*x)/4 +1;
	    cout<<ans<<endl;
	}
	return 0;
}
