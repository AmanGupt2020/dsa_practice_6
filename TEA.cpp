#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b, c; cin>>a>>b>>c;
    int rem = a % b;
    int x = a / b;
    if (b > a || a == b){
        cout << c <<endl;
    }
    
    else if ( rem  == 0 ){
         cout << x * c << endl;
    }
    
    else {
        cout << (x + 1) * c << endl;
    }
}

int main() {
	int t; cin >> t;
	while(t--) solve();
	return 0;
}
