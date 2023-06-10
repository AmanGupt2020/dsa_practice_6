#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int num;
		cin>>num;
		int arr[num];
		for(int i=0;i<num;i++){
			cin>>arr[i];
		}
		int g=__gcd(arr[0],arr[1]);
		for(int i=2;i<num;i++){
			g=__gcd(g,arr[i]);
		}
		for(int i=0;i<num;i++){
			cout<<(arr[i]/g)<<" ";
		}
		cout<<endl;
		}
		return 0;
}
