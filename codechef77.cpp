#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	int sum=0;
	while(t--){
		int x1,y1,x2,y2,x3,y3;
		cin>>x1>>y1>>x2>>y2>>x3>>y3;
		int x= pow(x1-x2,2)+pow(y1-y2,2);
		int y= pow(x1-x3,2)+pow(y1-y3,2);
		int z= pow(x2-x3,2)+pow(y2-y3,2);
		if((x+y==z) || (y+z==x) || (x+z==y)){
			sum++;
		}
	}
	cout<<sum<<endl;
	return 0;
}

