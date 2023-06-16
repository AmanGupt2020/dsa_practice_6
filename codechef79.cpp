#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int m=n-1;
		int r;
		int c=0;
		for(int i=2;i<=sqrt(n);i++){
			if(n%i==0){
				c++;
			break;	
			}
		}
		if(c==0){
			cout<<n-1<<endl;
		}
		else{
			if(int(sqrt(n))*int(sqrt(n))==n){
				cout<<0<<endl;
			}
			else{
				for(int i=1;i<sqrt(n);i++){
				if(n%i==0){
					r=n/i;
					if(m>abs(r-i)){
						m=abs(r-i);
					}
				}
			}
			cout<<m<<endl;
			}
			
			
		}
	}
	return 0;
}




