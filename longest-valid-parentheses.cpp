//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
   int maxLength(string S){
        // code here
        stack<int>St;
        St.push(-1);
        int maxlength=0;
        for(int i=0; i<S.length(); i++){
            //for opening bracket
            char ch=S[i];
            if(ch=='('){
                St.push(i);
            }
            else{
                //for closing bracket
                St.pop();
                if(St.empty()){
                    //matlab hum yaha kisi invalid closing bracket  ki wajah se pahuche h
                    //or iski wajah se hamara length ka index pop ho gya to usse wapas push kar denge
                    //)()() agar -1 push karne ka khayal aaye to ye test case ki length nikal kar dekhna 
                    //2-(-1)=3 jo invalid h par index yahi 0 push karne par 2-0=2
                    St.push(i);
                    
                }
                else{
                   int len=i-St.top();
                    maxlength=max(len,maxlength);
                }
            }
        }
        return maxlength;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        
        Solution ob;
        cout<<ob.maxLength(S)<<"\n";
    }
    return 0;
}
// } Driver Code Ends
