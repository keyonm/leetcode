class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int zeros = 0;
        int max = 0;
        int start = 0;

        for (int i = 0; i < nums.size(); ++i) {
            zeros += (nums[i] == 0);

            while (zeros > 1) {
                zeros -= (nums[start] == 0);
                ++start;
            }

            max = std::max(max, i - start);
        }

        return max;
    }
};