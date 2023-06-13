#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int num;
	    int y=0,n=0,i=0;
	    cin>>num;
	    string s;
	    cin>>s;
	    for(int j=0;j<num;j++){
	        if(s[j]=='Y')
	        y++;
	        else if(s[j]=='N')
	        n++;
	        else
	        i++;
	    }
	   if(i==0&&n!=0&&y!=0) 
	   cout<<"NOT INDIAN"<<endl;
	   else if(i==0&&y==0&&n!=0)
	   cout<<"NOT SURE"<<endl;
	    else if(i==0&&y!=0&&n==0)
	   cout<<"NOT INDIAN"<<endl;
	   else if(i!=0)
	   cout<<"INDIAN"<<endl;
	}
	return 0;
}
