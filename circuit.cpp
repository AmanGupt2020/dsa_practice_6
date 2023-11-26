#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	string s;
	cin>>s;
	stack<int>stack;
	for(int i=n-1;i>=0;i--){
		stack.push(arr[i]);
	}
	

	int num=stack.top();
	double sum=num;
	double sum1=1/sum;
	stack.pop();
	double num1;
	for(int i=0;i<s.size();i++){
		if(s[i]=='-'){
			num1=stack.top();
			stack.pop();
			sum=sum+num1;
			
		}
		else if(s[i]=='|'){
			num1=stack.top();
			stack.pop();
			cout<<num1<<endl;
			
			
			double p2=float(1/num1);
			cout<<p2<<endl;
			sum=sum1+p2;
			sum1=sum;
		}
		else{
			continue;
		}
		
	}
	cout<<fixed;
	cout<<setprecision(5);
	cout<<sum;
	

	
	return 0;
}
