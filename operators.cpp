#include<iostream>

using namespace std;
void showHelloWorld(){
	cout<<"Hello world !"<<endl;
	cout<<"AMAN GUPTA , VIT BHOPAL , 2ND YEAR"<<endl;
}
int main(){
	
	showHelloWorld();
	int a = 15;
	int b = 10;
	int c = a/b;
	//STEP 1
	cout<<"sum :"<<(a+b)<<endl;
	cout<<"diff :"<<(a-b)<<endl;
	cout<<"mul :"<<(a*b)<<endl;
	cout<<"divide :"<<c<<endl;
	cout<<"mod :"<<(a%b)<<endl;
	a++;
	cout<<"After increment :"<<a<<endl;
	a--;
	cout<<"After decrement :"<<a<<endl;
	int d = ++a;
	cout<<"Pre Increment :"<<d<<endl;
	int e = a++;
	cout<<"Post Increment :"<<e<<endl;
	cout<<"value of a :"<<a<<endl;
	//STEP 2
	bool checkValue = (a==17);
	cout<<checkValue<<endl;
	// STEP 3
	return 0;
}
