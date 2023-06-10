#include<iostream>
#include<vector>
using namespace std;
int main(){
	int t;
	cin>>t;
	
	while(t--){
		int num;
		cin>>num;
		int m;
		vector<long long int>arr;
		for(int i=0;i<num;i++){
			cin>>m;
			arr.push_back(m);
		}
		int pos;
		cin>>pos;
		for(int i=0;i<arr.size();i++){
			if(i+1==pos){
				cout<<arr[i]<<endl;
				break;
			}
		}
		
		
		
		
	}
	
	
	
	
	return 0;
}
