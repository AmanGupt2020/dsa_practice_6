#include<iostream>

using namespace std;
/* void fun(int x){
	if(x>0){
		
		cout<<x<<" ";
	fun(--x);
	}
}

/*void check(int n){
	if(n==0){
		
		cout<<"this is zero"<<endl;
	}
	else if(n>0){
		cout<<"this is positive"<<endl;
	}
	else {
		cout<<"this is negative"<<endl;
	}
	
}
*/
/*int main(){
	int a=3;
	fun(a);
//int a;
//for(int i =0;i<4;i++){
//	cin>>a;
//	check(a);
//	cout<<endl;
//}

	return 0;
}*/
int fun(int a[],int n){
	int x;
	if(n==1)
	return a[0];
	else
	 x= fun(a , n-1);
	 if(x>a[n-1])
	 return x;
	 else
	 return a[n-1];
	 
}
int main(){
	int arr[]={12,10,30,50,100};
int m=	fun(arr,5);
	cout<<m;
}

















