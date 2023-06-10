#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t; 
	
	int c=0;
	int m=0;
	for(int i=0;i<t;i++){
       int num;
       cin>>num;
       if(num%2==0){
       	c=c+1;
	   }
	   else{
	   	m=m+1;
	   }

}
		if(c>m){ 
			cout<<"READY FOR BATTLE"<<endl;
		}
		else{
			cout<<"NOT READY"<<endl;
		}
	
	
	
	
	
	
	
	return 0;
}
