#include <iostream>
#include<math.h>
using namespace std;

int main() {
	// your code goes here
	int t,n,m,income,i;
	cin>>t;
	while(t--){
	    cin>>n>>m;
	    income=pow(2,m);
	    for(i=0;i<n;i++)
	    income=income/2;
	    cout<<income<<endl;
	    
	}
	
	return 0;
}
