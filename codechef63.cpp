#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int x,y,k,n;
		cin>>x>>y>>k>>n;
		int temp=0;
		while(n--){
			int p,c;
			cin>>p>>c;
			if(c<=k && p+y>=x){
				temp=1;
			}
		}
		if(temp==1)
		cout<<"LuckyChef"<<endl;
		else
		cout<<"UnluckyChef"<<endl;
	}
	
	
	return 0;
}
