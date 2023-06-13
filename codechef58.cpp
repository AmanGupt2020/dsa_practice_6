#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
      int a,b,c,d,e,f;
	  int r;
	  cin>>r;
	  cin>>a>>b;
	  cin>>c>>d;
	  cin>>e>>f;
	  int x=(pow(c-a, 2)+ pow(d-b, 2));
	  int y= (pow(e-a,2)+ pow(f-b,2));
	  int z= (pow(e-c,2)+ pow(f-d,2));
	  if((x<=r*r && y<=r*r) || (z<=r*r  &&  y<=r*r) || (x<=r*r  && z<=r*r)){
	  	cout<<"yes"<<endl;
	  }
	  else{
	  	cout<<"no"<<endl;
	  }
	  		
}
	return 0;
}
