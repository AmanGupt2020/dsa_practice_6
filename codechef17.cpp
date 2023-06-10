#include<iostream>
using namespace std;
int occuraneOfFour(int n){
	int m;
     int c=0;
	while(n!=0){
		m=n%10;
		if(m==4){
			c++;
		}
		n=n/10;
	}
	cout<<c<<endl;
}
int main(){
	int t;
	cin>>t;
	int num;
	while(t--){
		cin>>num;
		occuraneOfFour(num);
	}
	return 0;
}
