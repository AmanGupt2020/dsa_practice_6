#include<iostream>
using namespace std;
int main(){
	
	cout<<"AMAN GUPTA . VIT BHOPAL , 2ND YEAR"<<endl;
	
	//STEP 1 
	int sum =0;
	int counter = 1;
	while(counter<=10){
		sum=sum+counter;
		counter=counter+1;
	}
	cout<<"sum [1,10] ="<<sum<<endl;
	//STEP 2
	sum=0;
	for(int counter=1; counter<=10; counter++){
		sum=sum+counter;
	}
	cout<<"sum [1,10] ="<<sum<<endl;
	//STEP 3
	int n;
	int total=0;
	for(int counter =1; counter<=5;counter++){
		cin>>n;
		total=total+n;
	}
	cout<<"total ="<<total<<endl;
	
	//STEP 4
	
	
	for(int rowNo=1;rowNo<=5;rowNo++){
		for(int j=0; j<rowNo;j++){
			cout <<"1 ";
		}
		cout<<endl;
	}
	
	return 0;
}
