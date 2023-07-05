#include<bits/stdc++.h>
using namespace std;
int main(){
	
	vector<int>arr(51,0);
	arr[0]=1;
	arr[1]=1;
	for(int i=2;i*i<=50;i++){
		if (arr[i]==0){
		
		for(int j=2*i;j<50;j=j+i){
			arr[j]=1;
		}
	}
}
for(int i=0;i<50;i++){
	if(arr[i]==0){
		cout<<i<<endl;
	}
}
	
return 0;	
}
