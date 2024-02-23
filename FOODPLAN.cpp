#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    float n,m;
	    cin>>n>>m;
	    n-=n*0.1;
	    //cout<<n<<" "<<m;
	    if(n==m){
	        cout<<"EITHER"<<endl;
	    }
	    else if(n<m){
	        cout<<"ONLINE"<<endl;
	    }
	    else{
	        cout<<"DINING"<<endl;
	    }
	}
	return 0;
}
