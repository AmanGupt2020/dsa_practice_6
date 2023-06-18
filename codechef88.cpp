#include<iostream>
using namespace std;
bool palon(int n){
	int temp=n;
	int sum=0;
	int r;
	while(n>0){
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	if(temp==sum){
		return true;
	}
	return false;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;  
		cin>>n;
		
		int count=0;
		while(1){
			int r;
		int sum=0;
			int temp=n; 
			while(n>0){ 
				r=n%10;  
				sum=sum*10+r;
				n=n/10; 
			}
			n=temp+sum;  
			count++;
			if(palon(n)){
				cout<<count<<" ";
				cout<<n<<endl;
				break;
			}
		}
	}
	
	
	return 0;
}

