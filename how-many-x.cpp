//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int countX(int L, int R, int X) {
        int count=0;
      for(int a=L+1; a<R; a++){
      int temp =a;
      while(temp > 0){
            int digit = temp % 10; 
            if(digit == X){
                  count++;
              }
              temp /=10;
          }
      }
       return count;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int L, R, X;
        cin >> L >> R >> X;
        Solution ob;
        int ans = ob.countX(L, R, X);
        cout << ans << "\n";
    }
}

// } Driver Code Ends
