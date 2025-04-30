class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> memo(cost.size(), -1);
        helper(memo, cost.size() - 1, cost);
        helper(memo, cost.size() - 2, cost);
        return min(memo[cost.size() - 1], memo[cost.size() - 2]);
    }

    int helper(vector<int> &memo, int index, vector<int>& cost) {
        if (index == 0 || index == 1) {
            return memo[index] = cost[index];
        } else if (memo[index] != -1) {
            return memo[index];
        } else {
            return memo[index] = cost[index] + min(helper(memo, index - 1, cost), helper(memo, index - 2, cost));
        }
    }
};