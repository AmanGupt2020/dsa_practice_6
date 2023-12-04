//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    int ispossible(int A[],int n,int mid,int M){
        int no_of_students=1;
       // int no_of_pages_continuous=A[0];
        int sum=0;
        for(int i=0;i<n;i++){
            
            
            if(A[i]+sum<=mid){
                sum+=A[i];
            //no_of_pages_continuous=A[i];
            }
            else{
                no_of_students++;
            
                sum=A[i];
            }
            
          
            
        }
         return no_of_students;
        
        
        
        
    }
    int findPages(int A[], int N, int M) 
    {
            if(M>N){
                return -1;
            }
        //code here
        //sort(A,A+N);
        int start=*max_element(A,A+N);
        int sum=0;
        int end=accumulate(A,A+N,sum);
        int ans=INT_MIN;
        while(start<=end){
            int mid=start+(end-start)/2;
            
            if(ispossible(A,N,mid,M)>M){
               
              start=mid+1;
            }
            else{
               end=mid-1;
            }
        }
        
        return start;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends
