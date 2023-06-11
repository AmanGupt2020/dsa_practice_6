#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		float num;
		cin>>num;
		
		if(num<1500){
		cout<<num+(0.1*num)+(0.9*num)<<endl;    
			
		}
		else{
		cout<<num+500+(0.98*num)<<endl;
		}
		
		
	}
	
	
	
	return 0;
}
