//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
       int max = INT_MIN ;
        map<int,int>mp ;
        for(int i =0 ;i<N ;i++)
        {
            mp[arr[i]] = 1 ;
        }
     
      
      
        vector<int>ans ;
        int count = 1 ;
          for(auto j :mp)
        {
            int n = j.first ;
            if(mp.find(n+1) != mp.end())
            count++ ;
            else{
          ans.push_back(count);
            count = 1 ;
            }
        }
         ans.push_back(count);
        
          
        for(int i =0 ;i<ans.size();i++)
        {
            if(max <ans[i])
            max = ans[i] ;
        }
      
      return max ;
    }
};

//{ Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}
// } Driver Code Ends
