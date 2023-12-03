#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--){
	    
	    int t;
	    cin>>t;
	    int star=0;
	    int ltime=0;
	    for(int i=0;i<t;i++){
	        string s;
	        cin>>s;
	        if(s=="START38"){
	            star++;
	        }
	        else if(s=="LTIME108"){
	            ltime++;
	        }
	    }
	    cout<<star<<" "<<ltime<<endl;
	    
	    
	    
	}
	return 0;
}
