#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int x,y;
	for(int i=0;i<n;i++){
	    cin>>x>>y;
	    cout<<min(x,y)<<endl;
	}
	return 0;
}
