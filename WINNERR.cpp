#include <iostream>
using namespace std;

int main(){
	// your code goes here
	int t;
	int pa,pb,qa,qb;
	cin>>t;
	while(t--){
	    cin>>pa>>pb>>qa>>qb;
	    int mp,mq;
	    mp=max(pa,pb);
	    mq=max(qa,qb);
	    if(mp<mq){
	        cout<<"P"<<endl;
	    }
	    else
	    if(mp>mq){
	        cout<<"Q"<<endl;
	}
	else
	if(mp=mq){
	    cout<<"TIE"<<endl;
	}
	}
	return 0;
}
