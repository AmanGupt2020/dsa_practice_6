#include <iostream>
using namespace std;
int linearSearch(int a[],int n , int target){ 
	for(int i=0;i<n;i++){
		if(a[i]==target){
			return i;
		}
	}
	return -1;
}
int binarySearch(int arr[],int n,int target){
	int l=0;
	int h=n-1;
	while(l<=h){
		int mid=(l+h)/2;
		if(arr[mid]==target){
			return mid;
		}
		else if(arr[mid]>target){
			h=mid-1;
		}
		else {
			l=mid+1;
		}
	}
  	
}
int main(){
	cout<<"AMAN GUPTA , VIT BHOPAL , 2ND YEAR"<<endl;
	//STEP 1------
	int arr[]={1,4,19,30,34,8};
	int n= sizeof(arr)/sizeof(int);
	cout<<linearSearch(arr , n , 10)<<endl;
	
	
	//STEP 2-------binary search
	int arr2[]={10,20,30,40,49,88,100,101,103,109,112,119};
	int size= sizeof(arr2)/sizeof(int);
	cout<<binarySearch(arr2,size,112)<<endl;
	
	return 0;
}
