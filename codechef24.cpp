#include<iostream>
using namespace std;
 
int main(){
	int t;
	cin>>t;
	int num;
	while(t--){
		int sum=1;
		cin>>num;
		if(num<=0){
      cout<<"wrong"<<endl;		
	}
	else{
		
	for(int i=1;i<=num;i++){  
		sum=sum*i;  
	}
	cout<<sum<<endl;    
	}
	
	}
	
	return 0;
}
