#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--){
	    string s1,s2;
	    cin>>s1>>s2;
	    for(int i=0;i<s1.length();i++){
	        if(s1[i]==s2[i]){
	            cout<<"G";
	        }
	        else{
	            cout<<"B";
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
