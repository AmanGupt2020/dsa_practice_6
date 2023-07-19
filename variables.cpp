#include<iostream>
#define CHESS_WIDTH 16
#define true false
using namespace std;
int a = 10;
void showHelloWorld(){
	cout<<"Hello world !"<<endl;
	cout<<"AMAN GUPTA , VIT BHOPAL , 2ND YEAR"<<endl;
	int a = 20;
	cout<<"Local variable a :"<<a<<endl;
}
int main(){
	bool success = true;
	bool found = true;
	found = false;
	char nameFirstLetter = 'A';
	int number = 1078;
	float num = 3.09;
	double val = 4.444;
	showHelloWorld();
	//STEP 1
	cout<<"bool size :"<<sizeof(bool)<<endl;
	cout<<"char size :"<<sizeof(char)<<endl;
	cout<<"int size :"<<sizeof(int)<<endl;
	cout<<"float size :"<<sizeof(float)<<endl;
	cout<<"double size :"<<sizeof(double)<<endl;
	cout<<"long long int size :"<<sizeof(long long int)<<endl;
	cout<<success<<nameFirstLetter<<number<<num<<val<<endl;
	//STEP 2
	cout<<"Global value :"<<a<<endl;
	//STEP 3
	const int SECOND_IN_HOUR = 3600;
	cout<<SECOND_IN_HOUR<<endl;
	cout<<CHESS_WIDTH<<endl;
	bool f = true;
	cout<<f<<endl;
	return 0;
}
