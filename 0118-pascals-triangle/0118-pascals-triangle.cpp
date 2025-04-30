class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> memo(numRows, vector<int>());
        if (numRows > 0) {
            memo[0] = { 1 };
        }

        if (numRows > 1) {
            memo[1] = { 1, 1 };
        }

        for (int i = 2; i < memo.size(); ++i) {
            for (int j = 0; j < (memo[i - 1].size() + 1); ++j) {
                if (j == 0 || j == memo[i - 1].size()) {
                    memo[i].push_back(1);
                } else {
                    memo[i].push_back(memo[i-1][j-1] + memo[i-1][j]);
                }
            }
        }

        return memo;
    }
};