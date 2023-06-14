#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int sum1=0;
		int sum2=0;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
	}
		sort(a,a+n);
		for(int i=0;i<k;i++){
			sum1=sum1+a[i];
		}
		for(int i=k;i<n;i++){
			sum2=sum2+a[i];
		}
		int x=0,y=0;
		for(int i=0;i<n-k;i++){
			x=x+a[i];
		}
		for(int i=n-k;i<n;i++){
			y=y+a[i];
		}
		cout<<max(sum2-sum1,y-x)<<endl;
	}
	return 0;
}
