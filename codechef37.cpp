#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int>arr(1000001,0);
	arr[0]=1;
	arr[1]=1;
	for(int i=2;i*i<=1000000;i++){
		if(arr[i]==0){
			for(int j=2*i;j<1000000;j=j+i){
				arr[j]=1;
			}
		}
	}
	int t;
	cin>>t;
	while(t--){
		int num;
		cin>>num;
		cout<<(arr[num]==0?"YES":"NO")<<endl;
	}
	
	return 0;	
	}
