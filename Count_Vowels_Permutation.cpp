#include <iostream>
#include <unordered_map>

class Solution {
public:
    int countVowelPermutation(int n) {
        const int kMod = 1000000007;
        std::unordered_map<char, long long> dp = {{'a', 1}, {'e', 1}, {'i', 1}, {'o', 1}, {'u', 1}};

        for (int i = 1; i < n; ++i) {
            std::unordered_map<char, long long> newDp = {
                {'a', (dp['e'] + dp['i'] + dp['u']) % kMod},
                {'e', (dp['a'] + dp['i']) % kMod},
                {'i', (dp['e'] + dp['o']) % kMod},
                {'o', (dp['i']) % kMod},
                {'u', (dp['i'] + dp['o']) % kMod}
            };
            dp = newDp;
        }

        long long result = 0;
        for (const auto& kv : dp) {
            result = (result + kv.second) % kMod;
        }

        return static_cast<int>(result);
    }
};

int main() {
    Solution solution;
    int n = 5;
    int count = solution.countVowelPermutation(n);
    std::cout << "The number of valid strings of length " << n << " is: " << count << std::endl;
    return 0;
}
