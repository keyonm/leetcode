class Solution {
public:
    int helper(vector<int>& days, vector<int>& costs, vector<int>& memo, int i) {
        if (i <= 0) {
            return 0;
        } 



        if (memo[i] != -1) {
            return memo[i];
        }

        if (auto it = find(days.begin(), days.end(), i); it == days.end()) {
            return memo[i] = helper(days, costs, memo, i - 1);
        }

        int one = costs[0] + helper(days, costs, memo, i - 1);
        int seven = costs[1] + helper(days, costs, memo, i - 7);
        int thirty = costs[2] + helper(days, costs, memo, i - 30);
        return memo[i] = min(one, min(seven, thirty));
    }

    int mincostTickets(vector<int>& days, vector<int>& costs) {
        vector<int> memo(days.back() + 1, -1);
        helper(days, costs, memo, days.back());
        return memo[days.back()];
    }
};