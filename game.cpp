#include<iostream>
using namespace std;
int main(){
	int count=0;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			count++;
		}
	}
	cout<<count<<endl;
	
	for(int i=1;i<=5;i++){
		for(int j=1;j<=i;j++){
		
			cout<<j<<" ";
			
		}
		
		cout<<endl;
	}
	for(int i=1;i<=5;i++){
		for(int j=1;j<=i;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
	for(int i=1;i<=4;i++){
		for(int j=5;j>i;j--){
			cout<<"* ";
		}
		cout<<endl;
	}
	int sum=0;
	int i;
	for( i=1; ;i++){
		if(sum>150){
		}
		break;
		sum=sum+i;
	}
	cout<<i<<endl;
	return 0;
}
