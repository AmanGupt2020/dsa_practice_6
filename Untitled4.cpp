#include<iostream>
using namespace std;
int main(){
	int arr[100][100];
	int n;
	cin>>n;
	
	int target;
	cout<<"target is :";
	cin>>target;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
		
	}
	cout<<"array is :"<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<arr[i][j];
		}
		cout<<endl;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(arr[i][j]==target){
				cout<<"number found at :"<<"["<<i<<","<<j<<"]";
			}
		}
		
	}
	
	return 0;
}
