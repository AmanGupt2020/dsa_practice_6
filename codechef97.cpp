#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int m,n;
		cin>>m>>n;
		
		int sum=0;
		for(int i=0;i<n;i++){
			int u;
			cin>>u;
			sum++;
			int v;
			cin>>v;
			sum++;
			
		}
		int x=m-sum;
		if(x%2==0){
			cout<<"yes"<<endl;
		}
		else{
			cout<<"no"<<endl;
		}
		}
		return 0;
	}
	

