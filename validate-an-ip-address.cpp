//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/* The function returns 1 if
IP string is valid else return 0
You are required to complete this method */
class Solution {
    public:
        int isValid(string s) {
            // code here
            int dotcount = 0;//, zerocount = 0;
            int size = s.size();
            int temp = 0;
            
            if(s[size - 1] < '0' || s[size - 1] > '9')
                return 0;
            
            for(int i = 0; i < size;){
                
                temp = 10 * temp + (s[i] - '0');
                if(temp == 0 && (i + 1 != size) && s[i+1] != '.')
                    return 0;
                
                if(i + 1 == size || s[i+1] == '.'){
                    
                    dotcount++;
                    
                    if(temp < 0 || temp > 255)
                        return 0;
                    
                    temp = 0;
                    i += 2;
                }
                else
                    i++;
            }
            if (dotcount != 4)
                return 0;
            
            return 1;
        }
};

//{ Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isValid(s) << endl;
    }
    return 0;
}
// } Driver Code Ends
