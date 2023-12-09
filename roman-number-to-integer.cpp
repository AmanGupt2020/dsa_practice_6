//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    int romanToDecimal(string &str) {
        // code here
        int size=str.length(),sum=0;
        map<char,int> mp;
        mp['I']=1;mp['V']=5;mp['X']=10,mp['L']=50,mp['C']=100;
        mp['D']=500;mp['M']=1000;
        int val1=mp[str[0]],val2;
        for(int i=0;i<size-1;i++){
            val2=mp[str[i+1]];
            if(val2<=val1){
                sum+=val1;
            }
            else{
                sum-=val1;
            }
            val1=val2;
        }
        sum+=val1;
        return sum;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}
// } Driver Code Ends
