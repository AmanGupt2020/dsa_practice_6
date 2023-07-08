#include<iostream>
using namespace std;
void fun(int n){
	if(n>0){
		if(n%2==0){
			cout<<n<<" ";
		}
		fun(n-2);
	}
	
	}

int main(){
	cout<<"AMAN GUPTA , VIT BHOPAL , 2ND YEAR"<<endl;
	int num;
	cin>>num;
	fun(num);
	return 0;
}
