//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    int posOfRightMostDiffBit(int m, int n)
    { 
        if(m<n) swap(m,n);
        
        if(m==n) return -1;
        
       int count=0;
       
       while(m>0 || n>0)
       {
           count ++;
           
         if(m!=0 && n==0 && m%2==0)
         { 
           m=m/2;  
         } 
         
         else if((m%2)!=(n%2))
         {
             return count;
         }
         
         else{
             m=m/2;
             n=n/2;
         }
       } 
       
       return count;
    }
};

//{ Driver Code Starts.

// Driver Code
int main()
{   
    int t;
    cin>>t; //input number of testcases
    while(t--)
    {
         int m,n;
         cin>>m>>n; //input m and n
         Solution ob;
         cout << ob.posOfRightMostDiffBit(m, n)<<endl;
    }
    return 0;     
} 
// } Driver Code Ends
