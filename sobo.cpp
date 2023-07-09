#include<iostream>
using namespace std;
int main(){
int n,r,sum=0;

cin>>n;
int temp=n;
while(n>1){
  r=n%10;
  if(r==6){
  	r=9;
  }
  else if(r==9){
  	r=6;
  }
sum=10*sum+r;
n=n/10;
}
cout<<sum<<endl;
if(temp==sum){
	cout<<"yes"<<endl;
	
}
else{
	cout<<"no"<<endl;
}
return 0;
}
