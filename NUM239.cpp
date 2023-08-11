#include <iostream>
using namespace std;

int main() {
	 int n;
	 cin>>n;
	 
	 while(n--){
	   int count=0;
	   int r,l;
	   cin>>r>>l;
	   for(int i=r;i<=l;i++){
	       if(i%10==2 || i%10==3 || i%10==9){
	           count++;
	       }
	   }
	    cout<<count<<endl;
	 }
	
	return 0;
}
