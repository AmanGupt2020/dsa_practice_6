#include<iostream>
using namespace std;
bool prime(int num){
	if(num<=1){
	return false;	
	}
	
	for(int i=2;i<num;i++){
		if(num%i==0){
			return false;
		}
	}
	return true;
}
int palon(int num){
	int temp=num;
	int sum=0;
	int r;
	while(num>0){
		r=num%10;
		sum=sum*10+r;
		num=num/10;
	}
	if(temp==sum){
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
	int n;
	cin>>n;
	while(n>0){
		if(prime(n) && palon(n)){
			cout<<n<<endl;
			break;
		}
		n++;
	}
	return 0;
}
