class Solution {
public:
    int countGoodStrings(int low, int high, int zero, int one) {
        int mod = 1000000007;
        vector<int> memo(high + 1, 0);
        if (zero != 0) {
            memo[zero] += 1;
        }

        if (one != 0) {
            memo[one] += 1;
        }

        int total = 0;

        for (int i = 0; i <= high; ++i) {
            if ((i - zero) >= 0) {
                memo[i] = (memo[i] + memo[i - zero]) % mod;
            }

            if ((i - one) >= 0) {
                memo[i] = (memo[i] + memo[i - one]) % mod;
            }

            if (i >= low) {
                total = (total + memo[i]) % mod;
            }
        }

        return total;
    }
};