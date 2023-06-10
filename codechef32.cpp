#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int c,n;
		cin>>c>>n;
		int arr[c];
		int sum=0;
		for(int i=0;i<c;i++){
			cin>>arr[i];
			sum=sum+arr[i];
		}
			if(sum<=c){
				cout<<"YES"<<endl;
			}
			else{
				cout<<"NO"<<endl;
			}
		}
		
		
		
		
	
	
	
	
	
	return 0;
}
