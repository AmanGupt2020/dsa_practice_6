#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int m,n,c;
		cin>>m>>n>>c;  
		int sum=0;
		int x=1;  
		   
		while(x<=m){ 
		int y=1;
			while(y<=n){ 
				if(x*y==c){ 
				sum++;	
				}
			y++;	
			}
			x++;
			
		}
		cout<<sum<<endl;
	}
	return 0;
	}
