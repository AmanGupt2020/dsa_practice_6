#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int num;
		cin>>num;
		int a[num];
		int sum=0;
		for(int i=0;i<num;i++){
			cin>>a[i];
		}
		sort(a,a+num);
		int min=a[0];
		for(int i=0;i<num;i++){
			sum=sum+a[i];
		}
		cout<<sum-min*num<<endl;
	}
return 0;	
}
