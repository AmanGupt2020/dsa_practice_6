#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int lcm;
		int gcd=__gcd(n,m);
		cout<<gcd<<" ";
		cout<<(n*m)/gcd<<endl;
}
	return 0;
}
