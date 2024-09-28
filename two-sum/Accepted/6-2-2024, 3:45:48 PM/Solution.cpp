// https://leetcode.com/problems/two-sum

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size() - 1; i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    vector<int> vect{ i, j };
                    return vect;
                }
            }
        }
        vector<int> vect{ -1, -1 };
        return vect;
    }
};