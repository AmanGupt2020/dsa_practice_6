//{ Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Pair {
public:
    int first, second;

    Pair(int first, int second) : first(first), second(second) {}

    bool operator<(const Pair& other) const {
        return this->first < other.first;
    }
};

class Solution{
    public:
    int min_sprinklers(int gallery[], int n)
    {
        // code here
        std::vector<Pair> sprinklers;

        // Create a list of sprinklers with their ranges
        for (int i = 0; i < n; i++) {
            if (gallery[i] != -1) {
                sprinklers.push_back(Pair(i - gallery[i], i + gallery[i]));
            }
        }

        // Sort the sprinklers based on their starting point
        std::sort(sprinklers.begin(), sprinklers.end());

        int count = 0;
        int i = 0;
        int target = 0;

        // Iterate through the sorted sprinklers to cover the entire gallery
        while (target < n) {
            int maxEnd = target - 1;

            // Find the sprinkler that covers the current target
            while (i < sprinklers.size()) {
                if (sprinklers[i].first > target)
                    break;
                maxEnd = std::max(maxEnd, sprinklers[i].second);
                i++;
            }

            // If no sprinkler covers the current target, return -1
            if (maxEnd < target) {
                return -1;
            }

            count++;
            target = maxEnd + 1;
        }

        return count;
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
        
        int gallery[n];
        for(int i=0; i<n; i++)
            cin>> gallery[i];
        Solution obj;
        cout<< obj.min_sprinklers(gallery,n) << endl;
    }
	return 1;
}

// } Driver Code Ends
