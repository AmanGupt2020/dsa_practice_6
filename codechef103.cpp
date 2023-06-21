#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	int num;
	int sum1=0;
	int sum2=0;
	for(int i=0;i<t;t++){
		cin>>num;
		if(num%2==0){
			sum1++;
		}
		else{
			sum2++;
		}
		
	}
	cout<<abs(sum1-sum2)<<endl;
	return 0;
}
