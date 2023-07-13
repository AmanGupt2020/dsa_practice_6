#include<iostream>
// HEADER FILE FOR STRING
#include<cstring>
#include<string>
using namespace std;
int main(){
	cout<<"AMAN GUPTA , VIT BHOPAL , 2ND YEAR"<<endl;
	//STEP---------c style string
	char str1[]= "hello world"; 
	char str2[]={'c','+','+','\0'}; //always ended with zero
	char temp[100];
	strcpy(temp , str1);
	cout<<temp<<endl;
	cout<<strlen(temp)<<endl;
	// "hello world"+"c++"
	strcat(temp , str2);
	cout<<temp<<endl;
	cout<<strlen(temp)<<endl;
	//strcpy() copy string
	//strlen() give length
	//strcat() add them
	//strcmp() compare
	
	// any string in c have fixed  maximum number
	//strcmp give integer value
	// str1<str2? negative
	//str1=str2? zero
	//str1>str2?positive
	cout<<strcmp( str1, str2)<<endl; 
	
	//STEP 2----- string class 
	    string s= "hello world";
	    cout<<"LENGTH :"<<s.size()<<endl;
	    string a= "C++";
	    s=s+a;
	    cout<<"updated s :"<<s<<endl;
	    cout<<(a==a)<<endl;
	    
	    for(int i=0;i<s.size();i++){
	    	if(i==0){
	    		s[i]='t';
			}
		}
		cout<<s<<endl;
	    
	return 0;
}
