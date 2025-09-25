class Solution {
public:
    vector<vector<int>> memo;
    
    int getMin(vector<int> &prefix, int i, int k) {
        int n = prefix.size() - 1;
        if (memo[i][k] != -1) return memo[i][k];

        if (k == 1) return memo[i][k] = prefix[n] - prefix[i];

        int minVal = INT_MAX;
        for (int j = i; j <= n - k; ++j) {
            int firstSplit = prefix[j + 1] - prefix[i];
            int largest = max(firstSplit, getMin(prefix, j + 1, k - 1));

            minVal = min(minVal, largest);
        }
        return memo[i][k] = minVal;
    }

    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> prefix(n + 1, 0);
        for (int i = 0; i < n; ++i) {
            prefix[i + 1] = prefix[i] + nums[i];
        }

        memo = vector<vector<int>>(n + 1, vector<int>(k + 1, -1));
        
        return getMin(prefix, 0, k);
    }
};