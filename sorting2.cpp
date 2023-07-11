#include<iostream>
using namespace std;
void insertionSort(int arr[],int n){
	for(int i=0;i<n;i++){
		int j=i;
		while(j>0 && arr[j-1]>arr[j]){
			int temp = arr[j-1];
			arr[j-1]=arr[j];
			arr[j]=temp;
			j--;
		}
	}
}
void printArray(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
}
int bubbleSort(int arr[],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				int temp= arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	
}
int main(){
	cout<<"AMAN GUPTA , VIT BHOPAL , 2ND YEAR"<<endl;
	//STEP 1-----insertion sort
	int arr[]={9,8,6,16,1};
	int n= sizeof(arr)/sizeof(int);
	insertionSort(arr,n);
	printArray(arr,n);
	cout<<endl;
	//STEP 2------BUBBLE SORT
	int arr2[]={9,8,6,16,-1};
	int n2= sizeof(arr2)/sizeof(int);
	bubbleSort(arr2,n2);
	printArray(arr2,n2);
	
	return 0;
}
