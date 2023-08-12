#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    int p=n;
	    
	    
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++){
	        int total=0;
	        
	        for(int j=0;j<n;j++){
	            if(a[i]!=a[j]){
	                total++;
	            }
	           
	        }
	        p=min(p,total);
	    }
	    cout<<p<<endl;
	}
	return 0;
}
