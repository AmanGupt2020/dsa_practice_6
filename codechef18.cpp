#include<bits/stdc++.h>

using namespace std;
int main(){
	int t;
	cin>>t;
	int m,n,a=0;
	int sum1=0;
	int sum2=0;
	int lead=0;
	while(t--){
		cin>>m>>n;
		sum1=sum1+m;
		sum2=sum2+n;
		if(abs(m-n)>a){
			a=m-n;
			if(sum1>sum2){
			      lead=1;	
			}
			else{
				lead=2;
			}
			}
			
		}
	
	cout<<lead<<" "<<a;
	
	
	
	return 0;
}
