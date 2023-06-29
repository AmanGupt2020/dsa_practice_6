#include<iostream>
using namespace std;
int sum(int a , int b);
int sum(int a,int b,int c);
bool isPrime(int n){
	if(n<2) return false;
	int number=0;
	for(int i=2;i<n; i++){
		if((n%i)==0){
		
			return false;
	}
		
	}
	return true;
}
void printStar(int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
		
	
     cout<<"* ";
 }
 cout<<endl;
}
}
int main(){
	cout<<"AMAN GUPTA , VIT BHOPAL , 2ND YEAR"<<endl;
	//STEP 1----
int ans = sum(5,10);
cout<<ans<<endl;

//STEP 2---	
cout<<sum(5,10,20)<<endl;
	
	//STEP 3-----
	int count;
	 for(int i=2; i<=100;i++){
 	if( isPrime(i) ){
 		cout<<i<<endl;
 		count++;
 		
	 }
 	
 }
cout<<"total no. of prime till 100 :"<<count<<endl;
//STEP 4-------	 
 int a;
 for(int i= 1;i<10;i++){
 	cin>>a;
 	printStar(a);
 }
 return 0; 
}
int sum(int a , int b){
	return a+b;
}
int sum(int a,int b,int c){
	int ans = sum(a,b);
 ans = sum(ans , c);
 

}
 

        

