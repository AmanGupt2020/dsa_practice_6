//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
class Solution{
  public:
    string multiplyStrings(string s1, string s2) {
       //Your code here
       auto removeLeadingZeros = [](string &str) {
        size_t nonZeroIndex = str.find_first_not_of('0');
        str = (nonZeroIndex != string::npos) ? str.substr(nonZeroIndex) : "0";
    };

    // Determine the signs of the numbers
    int sign = 1;
    if (s1[0] == '-') {
        sign *= -1;
        s1 = s1.substr(1);
    }
    if (s2[0] == '-') {
        sign *= -1;
        s2 = s2.substr(1);
    }

    int n1 = s1.length();
    int n2 = s2.length();

    // Result will have at most n1 + n2 digits
    vector<int> result(n1 + n2, 0);

    // Multiply each digit and add to the result
    for (int i = n1 - 1; i >= 0; --i) {
        for (int j = n2 - 1; j >= 0; --j) {
            int mul = (s1[i] - '0') * (s2[j] - '0');
            int sum = mul + result[i + j + 1]; // Add the previous result at this position

            // Update result and carry
            result[i + j] += sum / 10;
            result[i + j + 1] = sum % 10;
        }
    }

    // Convert the result vector to a string
    string resultStr = "";
    for (int digit : result) {
        resultStr += to_string(digit);
    }

    // Remove leading zeros from the result
    removeLeadingZeros(resultStr);

    // If the result is zero, the sign should be positive
    if (resultStr == "0") {
        sign = 1;
    }

    return (sign == -1) ? "-" + resultStr : resultStr;
    }

};

//{ Driver Code Starts.
 
int main() {
     
    int t;
    cin>>t;
    while(t--)
    {
    	string a;
    	string b;
    	cin>>a>>b;
    	Solution obj;
    	cout<<obj.multiplyStrings(a,b)<<endl;
    }
     
}
// } Driver Code Ends
