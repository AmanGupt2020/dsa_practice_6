 #include<bits/stdc++.h>
using namespace std;
int main(){
	int a,n,k;
	cin>>a>>n>>k;
	n++;
	int i=0;
	vector<int>arr(k);
	while(a>0 && i<=arr.size()-1){
		arr[i]=a%n;
		a=a/n;
		i++;
	}
	for(int i=0;i<arr.size();i++){
		cout<<arr[i]<<" ";
	}
	
	return 0;
}
