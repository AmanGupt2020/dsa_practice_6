#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+1][n+1];
		pair<int,int>arr[n*n];
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				cin>>a[i][j];
				arr[a[i][j]]={i,j};
			}
		}
		int dist=0;
		
		for(int i=2;i<=n*n;i++){
		dist=dist+abs(arr[i].first-arr[i-1].first)+abs(arr[i].second-arr[i-1].second);	
		}
		cout<<dist<<endl;
	}
	return 0;
}
