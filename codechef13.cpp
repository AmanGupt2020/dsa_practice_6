#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int num;
	int x=1;
	int count;
	int c=0;
	while(n--){
	cin>>num;	
	
		while(1){   

		count=num/(5^(x)); 
		 
		
		if(count<1){  
			break;
		}
		c=c+count;
		x=x+1;		
		}
	
		cout<<c<<endl;
	}
	
	
	return 0;
}
