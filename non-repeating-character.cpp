//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    char nonrepeatingCharacter(string S)
    {
       //Your code here
       int freq[26]={0};
       queue<char>q;
    //   int n = s.length();
       for(int i=0;i<S.length();i++){
           char ch=S[i];
           freq[ch-'a']++;
           q.push(ch);
           while(!q.empty() ){
               if(freq[q.front()-'a']>1){
                   q.pop();
                   
               }
               else{
                   break;
               }
           }
           
       }
       if(!q.empty()){
           return q.front();
           
       }
           return '$';
       
    }

};

//{ Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--)
	{
	
	    string S;
	    cin >> S;
	    Solution obj;
        char ans = obj.nonrepeatingCharacter(S);
        
        if(ans != '$')
	    cout << ans;
        else cout << "-1";
            
        cout << endl;
	    
	}
	
	return 0;
}

// } Driver Code Ends
