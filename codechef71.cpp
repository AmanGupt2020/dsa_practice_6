#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
	    int x=0;
	    int m=0;
	    for(int i=0;i<n;i++){
	    	cin>>arr[i];
		}
		    
		
				for(int i=0;i<n-1;i++){ 
			
			for(int j=i+1;j<n;j++){   
				if(arr[i]>arr[j]){ 
					x++;
				}
			
				
			}
			
		}
		for(int i=0;i<n-1;i++){
			if(arr[i]>arr[i+1])
			m++;
		}
		if(x==m){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
		}
		
	
	
	
	return 0;
}
