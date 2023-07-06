#include<iostream>
#include<vector>
using namespace std;
int coe(int n){
	vector<int>arr(n+1,0);
	for(int i=2;i*i<=n;i++){
		if(arr[i]==0){
			for(int j=2*i;j<=n;j=j+i){
				arr[j]=1;
			}
		}
	}
	for(int i=2;i<=n;i++){
		if(arr[i]==0){
			cout<<i<<endl;
		}
	}
}


int main(){
	int n=20;
	coe(n);
	
	
	
	return 0;
}
