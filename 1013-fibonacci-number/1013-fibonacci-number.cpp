class Solution {
public:
    int fib(int n) {
        vector<int> memo(n + 1, 0);
        if (n == 0) {
            return 0;
        }

        if (n == 1 || n == 2) {
            return 1;
        }

        memo[1] = memo[2] = 1;

        for (int i = 3; i <= n; ++i) {
            memo[i] = memo[i-1] + memo[i-2];
        }

        return memo[n];
    }
};