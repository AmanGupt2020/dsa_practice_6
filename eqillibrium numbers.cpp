#include<iostream>
using namespace std;
int main(){
	int arr[100];
	
	
	
	int n;
	cin>>n;
	int m;
	
	for(int i=0;i<n;i++){
		cin>>m;
		int sum1=0;
	int sum2=0;
		for(int j=0;j<m;j++){
	        cin>>arr[j];
		int low=0;
		int high= m-1; 
		int mid=(low+high)/2;
		for(int k=0;k<mid;k++){
			sum1=sum1+arr[k];  
			
		}
		for(int l=mid+1;l<=high;l++){  
			sum2= sum2+arr[l];
		}
	if(sum1==sum2){
		cout<<"equillibrium possible at "<<arr[mid]<<endl;
	}
	else{
		cout<<"no eqillibrium"<<endl;
	}			
		}
	   
}
	
	
	
		
			
	
	return 0;
}
