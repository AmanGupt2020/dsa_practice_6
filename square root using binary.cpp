#include<iostream>
using namespace std;
int sqrt(int n){
	if(n==0 || n==1) return n;
	int low=1;
	int high=n;
	int s;
	
	while(low<=high){
		int mid= (low+high)/2;
		if(mid*mid==n){
			return mid;
			break;
		}
		else if(mid*mid>n){
			high=mid-1;
		}
		else{
			low=mid+1;
			
		        s=mid;	
		}
		
		
	}
	return s;
}
int main(){
	int testcase;
	cin>>testcase;
	int n;
	while(testcase--){
		cin>>n;
	cout<<sqrt(n)<<endl;
}
		
			
	
    return 0;	
}
