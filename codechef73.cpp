#include<bits/stdc++.h>
using namespace std;
int main(){
		int n1,n2,n3;
		cin>>n1>>n2>>n3;
		int n=n1+n2+n3;
		int arr[n];
		int brr[n];
		int c=0;
		int k=0;
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		sort(arr,arr+n);
		for(int i=0;i<n-1;i++){
			if(arr[i]==arr[i+1]){
				c++;
			}
			else{
				if(c>0){
				brr[k]=arr[i];
				k++;
				c=0;
			}
			}
		}
		cout<<k<<endl;
		for(int i=0;i<k;i++){
		cout<<brr[i]<<endl;	
		}
	
	return 0;
}
