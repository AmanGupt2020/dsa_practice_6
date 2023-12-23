//{ Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/

class Solution {
public:
    bool palindrome(string st){
    int s=0;
    int e=st.length()-1;
    while(s<e){
        if(st[s]==st[e]){
            s++;
            e--;
        }
        else{
            return false;
        }
        
    }
    return true;
}
    int PalinArray(int a[], int n)
    {
        for(int i=0;i<n;i++){
            string st=to_string(a[i]);
            if(palindrome(st)==false)
            return 0;
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
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}
// } Driver Code Ends
