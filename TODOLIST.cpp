#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	int c=0;
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	    if(arr[i]>=1000){
	        c++;
	    }
	}
	cout<<c<<endl;
	
}
	return 0;
}
