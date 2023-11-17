//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
     string longestCommonPrefix (string arr[], int N)
    {
        // your code here
        string result;
        int size  = INT_MAX;
        for(int i = 0; i < N; i++)
        {
            int si = arr[i].length();
            size = min(size, si);
        }
        int i = 0;
        char temp;
        while(i < size)
        {
            temp = arr[0][i];
            int flag = 1;
        for(int k = 0; k < N; k++)
        {
            if(temp != arr[k][i])
            {
                flag = 0;
            }
            
        }
            if(flag == 1)
            {
                result.push_back(temp);
            }
            else 
            break;
            i++;
        }
        if(result.length() == 0)
            return "-1";
        return result;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends
