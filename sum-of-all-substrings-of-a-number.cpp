 long long sumSubstrings(string s){
          long long sum = 0;
        long long multiplier = 1;
        long long mod = 1000000007;

        for (int i = s.length() - 1; i >= 0; i--) {
            sum = (sum + (s[i] - '0') * multiplier * (i + 1)) % mod;
            multiplier = (multiplier * 10 + 1) % mod;
        }
        return sum;
