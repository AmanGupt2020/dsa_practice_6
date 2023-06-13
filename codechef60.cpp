#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long int n,k;   
		cin>>n>>k; 
		int sum=0;
		  for(int i=1;i<=k;i++){
		      if((n%i)>sum){
		          sum=n%i;
		      }
		  }
		  cout<<sum<<endl;
	}
	return 0;
}
