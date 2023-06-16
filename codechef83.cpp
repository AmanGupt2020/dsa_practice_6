#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int md=0;
		int mn;
		int sum=0;
		int n;
		cin>>n;
		int a[n];
		int b[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			cin>>b[i];
		}
		for(int i=0;i<n;i++){
			if(b[i]>md){
				md=b[i];
			}
		}
		for(int i=2;i<md;i++)
		{
			mn=0;
			for(int j=0;j<n;j++){
				if(a[j]<=i && b[j]>i){
					mn++;
				}
			}
			if(mn>sum){
				sum=mn;
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}



