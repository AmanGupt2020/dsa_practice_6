#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int find_optimal_middle_subsequence(vector<int>& arr) {
    int n=arr.size();
    int sum=100;
    for(int i=0;i<n;i++){
    	for(int j=i+1;j<n;j++){
    		
    		for(int k=j+1;k<n;k++){
    			int total=0;
    			if(arr[i]<arr[j] && arr[j]>arr[k]){
    				total=arr[i]+arr[j]+arr[k];
				}
				sum=min(sum,total);
			}
		}
	}
    return sum;
}

int main() {
	vector<int> vector1;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int m;
		cin>>m;
		vector1.push_back(m);
	}
    
    int result = find_optimal_middle_subsequence(vector1);
    cout << result << endl; // Output: 4

    return 0;
}
