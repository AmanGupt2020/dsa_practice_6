#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		float Cmin= sqrt(b*b-a*a);
		float Cmax= sqrt(b*b+a*a);
		cout<<Cmin<<" "<<Cmax<<endl;
	}
	
	return 0;
}
