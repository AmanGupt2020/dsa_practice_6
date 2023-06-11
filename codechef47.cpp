#include<bits/stdc++.h>
using namespace std;
int main()
{  int t;
cin>>t;  
while(t--){
	int num;
	cin>>num;     
	vector<int>arr(num); 
	for(int i=0;i<num;i++){  
		cin>>arr[i];  
	}
	sort(arr.begin(),arr.end());  
	int sum=arr[0]+arr[1];   
	int c;
	for(int i=1;i<num;i++){ 
		c=arr[i]+arr[i+1]; 
		if(sum>c){
			sum=c;
		}
		
	}
	cout<<sum<<endl;
}
	return 0;
}
