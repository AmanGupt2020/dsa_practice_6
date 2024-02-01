//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

#include <vector>
#include <string>

class Solution
{
public:
    // Function to check if a string is Pangram or not.
    bool checkPangram(string s)
    {
        int n = s.size();
        
        // If the string length is less than 26, it can't be a pangram.
        if (n < 26)
            return false;
        
        // Create an array to store the count of each letter.
        vector<int> cnt(26, 0);
        
        // Iterate through the string to count each letter.
        for (int i = 0; i < n; i++)
        {
            char ch = tolower(s[i]); // Convert the character to lowercase.
            
            // Check if the character is a lowercase letter.
            if (ch >= 'a' && ch <= 'z')
            {
                cnt[ch - 'a']++;
            }
        }
        
        // Check if all letters are present at least once.
        for (int i = 0; i < 26; i++)
        {
            if (cnt[i] == 0)
                return false;
        }
        
        // If all letters are present, it is a pangram.
        return true;
    }

};

//{ Driver Code Starts.

// Driver Program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--){
        string s;
        getline(cin, s);
        Solution obj;
        if (obj.checkPangram(s) == true)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
    return(0);
}

// } Driver Code Ends
