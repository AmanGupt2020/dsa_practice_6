#include<iostream>
using namespace std;
int main(){
	cout<<"AMAN GUPTA , VIT BHOPAL , 2ND YEAR"<<endl;
	int arr[]={2,4,-8,9,10,-2,4,-20,10};
	int n=9;
	int curr_sum= arr[0]; 
	int max_sum = arr[0];   
	for(int i=1;i<n;i++){  
		if(curr_sum+arr[i]<0){  
			curr_sum=0;     
		}
		else{
			curr_sum=curr_sum+arr[i];   
			if(max_sum<curr_sum){    
				max_sum=curr_sum;   
			}
		}
		
		
	}
	cout<<"kadane algorithm :"<<max_sum;
	
	
	return 0;
}
