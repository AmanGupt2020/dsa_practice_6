//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


// } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/


class Solution
{
    public:
     double fractionalKnapsack(int W, Item arr[], int n)
    {
        pair<double,int> rat[n];
        for(int i=0;i<n;i++){
            double x=((double) arr[i].value)/((double) arr[i].weight);
            rat[i] = {x,i};
        }
        
        auto customComparator = [](const pair<double, int>& a, const pair<double, int>& b) {
            return a.first > b.first;
        };
        
        sort(rat,rat+n,customComparator);
        double val=0;
        for(int i = 0;i<n;i++){
            double ratio = rat[i].first;
            int index = rat[i].second;
            int w = min(W,arr[index].weight);
            val+= w*ratio;
            W -=w;
            
        }
        return val;
    }
        
};


//{ Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}
// } Driver Code Ends
