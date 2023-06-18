#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;  
		int sum1=0;
		int sum2=0;
		int sum3=0;
		int r3;
		int r1;
		int r2;
		while(a>0){ 
			r1=a%10; 
			sum1=sum1*10+r1; 
			a=a/10; 
		}
		while(b>0){  
			r2=b%10; 
			sum2=sum2*10+r2; 
			b=b/10;  
		}
		int c=sum1+sum2; 
	    while(c>0){ 
			r3=c%10; 
			sum3=sum3*10+r3;
			c=c/10; 
		}
		cout<<sum3<<endl;
	}
	return 0;
}
