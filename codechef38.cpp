#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t){
		int a[t],b[t];
		int temp;
		for(int i=0;i<t;i++){
			cin>>a[i];
		}
		for(int i=0;i<t;i++){
			b[a[i]-1]=i+1;
		}
		for(int i=0;i<t;i++){
			if(b[i]==a[i]){
				temp=0;
			}
			else{
				temp=1;
				break;
			}
		}
		if(temp==0){ 
			cout<<"ambiguous"<<endl;
		}
		else{
			cout<<"not ambiguous"<<endl;
		}
		cin>>t;
	}
	return 0;
}
