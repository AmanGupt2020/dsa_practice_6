#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		vector<int>arr(n+1,1);
		for(int i=0;i<m;i++){
			int c;
			cin>>c;
			arr[c]=0;
		}
		vector<int>brr;
		for(int i=1;i<=n;i++){
			if(arr[i]==1){
				brr.push_back(i);
			}
		}
		for(int i=0;i<brr.size();i=i+2){
			cout<<brr[i]<<" ";
		}
		cout<<endl;
		for(int i=1;i<brr.size();i=i+2){
			cout<<brr[i]<<" ";
		}
		cout<<endl;
	}
	
	
	
	
	return 0;
}
