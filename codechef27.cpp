#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	
	int diff;
	int s;
	
	while(t--){
		int c;
		int num;
		cin>>num;
		vector<long long int>arr;
		for(int i=0;i<num;i++){
			cin>>s;
			arr.push_back(s);
		}
	sort(arr.begin(),arr.end());  
		c= arr[1]-arr[0];    
		for(int i=0;i<arr.size()-1;i++){    
			diff=arr[i+1]-arr[i];    
			
			if(c>diff){  
				
				c=diff; 
			}
			
			
			}
		
		cout<<c<<endl;

	}
	
	return 0;
}
