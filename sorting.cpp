#include<iostream>
using namespace std;
int selectionSort(int a[],int n){
	for(int i=0;i<n;i++){
		int b= i;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[b]){
				b=j;
			}
		}
		int temp = a[i];
		a[i]=a[b];
		a[b]=temp;
		
	}
	
	
}
int printArray(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}

int main(){
      cout<<"AMAN GUPTA , VIT BHOPAL , 2ND YEAR"<<endl;
      int a[5];
      for(int i=0;i<5;i++){
      	cin>>a[i];
      	
      
	  }
	  int n= sizeof(a)/sizeof(int);
	  selectionSort(a,n);
      printArray(a,n);
      
      return 0;
}
