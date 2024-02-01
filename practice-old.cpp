#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
	    int a,b,c;
	    cin>>a>>b>>c;
	    if(c/b<=a){
	        cout<<c/b<<endl;
	    }
	    else{
	        cout<<a<<endl;
	    }
	}

}
