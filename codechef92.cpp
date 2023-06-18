#include<bits/stdc++.h>
#include<set>
using namespace std;
int main(){
	int t=10;
	
	while(t--){
		set<int> s;
		int arr[10];
		for(int i=0;i<10;i++){
			cin>>arr[i];
		}
		for(int i=0;i<10;i++){
			if(arr[i]>0){
				s.insert(arr[i]%42);
			}
		}
		cout<<s.size()<<endl;
	}
	return 0;
}
