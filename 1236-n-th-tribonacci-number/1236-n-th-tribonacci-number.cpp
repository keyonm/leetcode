class Solution {
public:
    int tribonacci(int n) {
        if (n == 0) {
            return 0;
        } else if (n < 3) {
            return 1;
        }

        vector<int> memo(n + 1, 0);
        memo[1] = memo[2] = 1;
        for (int i = 3; i < memo.size(); ++i) {
            memo[i] = memo[i - 1] + memo[i - 2] + memo[i - 3];
        }

        return memo[n];
    }
};