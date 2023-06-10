#include<iostream>
using namespace std;
int main(){
    int n;
    int arr[1000];
    cin>>n;  
    int low=0;  
    int high=n-1;   
    for(int i=0;i<n;i++){
    	cin>>arr[i];     
	}
	for(int i=0;i<n;i++){
    	while(low<=high){  
    		if(arr[i]>arr[i+1]){  
    			int temp=arr[i];  
    			arr[i]=arr[i+1];   
    			arr[i+1]=temp;    
			}
		else{
			return a[i];
		}
			
			
			low++;  
			i++;  
		}
	}
	 for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
    	


      return 0;
}
