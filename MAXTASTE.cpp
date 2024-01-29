#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    cout<<(max(a,b)+max(c,d))<<endl;
	}
return 0;
}
