#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;   
		int sum=0; 
		sort(s.begin(),s.end()); 
		for(int i=0;i<s.size();i++){    
			sum++;    
			if(s[i]==s[i+1]){        
				i++;  
				continue;    
			     	
			}
			
			
		}
		cout<<sum<<endl;
	}
	return 0;
}
