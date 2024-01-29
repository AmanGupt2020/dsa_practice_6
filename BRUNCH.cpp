#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
	    int a,b;
	    cin>>a>>b;
	    if(a/b<=20){
	    cout<<a/b<<endl;}
	    else {
	        cout<<"20"<<endl;
	    }
	}
	return 0;

}
