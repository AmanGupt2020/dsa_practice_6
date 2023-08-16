#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    unordered_set<int> arr2;
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        arr2.insert(arr[i]);
	    }
	    cout<<arr2.size()<<endl;
	}
	return 0;
}
