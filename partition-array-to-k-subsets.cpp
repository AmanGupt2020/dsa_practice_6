//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this method */

/*You are required to complete this method */

class Solution{
  public:
    bool isKPartitionPossible(int a[], int n, int k)
    {
         //Your code here
         if(k>=n) return 0;
         int sum=0;
         for(int i=0;i<n;i++) sum+=a[i];
         if(sum%k!=0) return 0;
         sum = sum/k;
         stack<int> st;
         sort(a, a+n);
         for(int i=0;i<n;i++) st.push(a[i]);
         while(!st.empty()){
             stack<int> s;
             int cur = 0;
             while(cur<sum && !st.empty()){
                 int x = st.top();
                 st.pop();
                 if(cur+x<=sum){
                     cur+=x;
                 }
                 else{
                     s.push(x);
                 }
             }
             if(cur!=sum) return 0;
             while(!s.empty()){
                 int x = s.top();
                 s.pop();
                 st.push(x);
             }
         }
         return 1;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	
    	cin>>n;
    	int a[n];
    	for(int i=0;i<n;i++)
    	cin>>a[i];
    	int k;
    	cin>>k;
    	Solution obj;
    	cout<<obj.isKPartitionPossible(a, n, k)<<endl;
    }
}
// } Driver Code Ends
