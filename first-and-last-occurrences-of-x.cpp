//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    vector<int> find(int arr[], int n , int x )
    {
        // code here
         int start = 0;
    int end = n - 1;

    int first = -1;

    // Find the first occurrence
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == x)
        {
            first = mid;
            end = mid - 1;
        }
        else if (arr[mid] < x)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    // Reset start and end for the next binary search
    start = 0;
    end = n - 1;

    int last = -1;

    // Find the last occurrence
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == x)
        {
            last = mid;
            start = mid + 1;
        }
        else if (arr[mid] < x)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    std::vector<int> occurrences;
    occurrences.push_back(first);
    occurrences.push_back(last);

    return occurrences;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends
