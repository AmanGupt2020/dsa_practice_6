//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
   void sieve(int n, vector<int> &prime){
        for(int i = 2; i <= sqrt(n); i++){
            if(prime[i] == 1){
                for(int j = i*i; j <= n; j +=i){
                    prime[j] = 0;
                }
            }
        }
        
    }
    
    int sumD(int temp){
        int sum_digits = 0;
        
        while(temp > 0){
            sum_digits += temp % 10;
            temp = temp / 10;
        }
        
        return sum_digits;
        
    }
    
    int sumP(int n, vector<int> &prime){
        int k = n;
        int sum = 0;
        for(int i = 2; i < k; i++){
            if(n < 1)break;
            if(prime[i] == 1){
                while(n % i == 0){
                    n = n/i;
                    sum += sumD(i);
                }
                
            }
        }
        
        return sum;
    }
    
    int smithNum(int n) {
        //Sieve
        vector<int>prime(n+1, 1);
        sieve(n, prime);
        if(prime[n] == 1)return 0;
        
        //Sum of Digits
        int sum_digits = sumD(n);
        
        //Sum of primefactors
        int sum = sumP(n, prime);
        
        if(sum == sum_digits)return 1;
        return 0;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;

        Solution ob;
        cout << ob.smithNum(n) << endl;
    }
    return 0;
}
// } Driver Code Ends
