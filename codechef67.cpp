#include<iostream>
using namespace std;
int count(int a[],int n,int m){
	int sum=0;
	for(int i=0;i<n;i++){
		if(a[i]==m){
			sum++;
		}
	}
	return sum;
}


int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[1000];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int m=a[0];
		int l=count(a,n,m);
	
	for(int i=1;i<n;i++){
		if(count(a,n,a[i])==l){
			if(a[i]<m){
				m=a[i];
			}
		}
		if(count(a,n,a[i])>l){
			l=count(a,n,a[i]);
			m=a[i];
		}
	}
	cout<<m<<" "<<l<<endl;
	
}
return 0;
}
