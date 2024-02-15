#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int np, tp;
	    cin>>np>>tp;
	    int cc;
	    cc = np*100;
	    int pr;
	    pr = (tp-cc);
	    if(pr<=0){
	        cout<<"0\n";
	    } else{
	        if(pr%100!=0){
	            pr/=100;
	            pr+=1;
	            cout<<pr<<'\n';
	        } else{
	            pr/=100;
	        cout<<pr<<"\n";
	    }
	    }
	}
	return 0;
}
