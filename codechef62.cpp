#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
  	int num;
  	cin>>num;
  	int a[num],b[num];
  	for(int i=0;i<num;i++){
  		cin>>a[i];
	  }
	  	for(int i=0;i<num;i++){
  		cin>>b[i];
	  }
	  int sum=0;
	  sort(a,a+num);
	  sort(b,b+num);
	  for(int i=0;i<num;i++){
	  	for(int j=i;j<num;j++){
	  		if(a[i]<=b[j]){
	  			sum++;
	  			b[j]=-1;
	  			break;
			  }
		  }
	  }
  	cout<<sum<<endl;
  	
  }
	
		
		return 0;
}
