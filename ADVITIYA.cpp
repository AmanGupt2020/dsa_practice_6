#include <bits/stdc++.h>
#include <cmath>//for ceil() and floor()
#include <cstdlib>//for abs()
#include <algorithm>//sort()
#include <numeric>//for gcd() and lcm()
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,d,e;cin>>a>>b>>c>>d>>e;
	    if(a+b+c+d+e>=4) cout<<"YES"<<endl;
	    else cout<<"NO\n";
	}
	return 0;
}
