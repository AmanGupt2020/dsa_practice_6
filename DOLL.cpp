#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--){
	    int k;
	    int t;
	    cin>>k>>t;
	    int a[k];
	    int total=0;
	    for(int i=0;i<k;i++){
	        cin>>a[i];
	        if(a[i]>t){
	            total++;
	        }
	    }
	    cout<<total<<endl;
	    
	}
	return 0;
}
