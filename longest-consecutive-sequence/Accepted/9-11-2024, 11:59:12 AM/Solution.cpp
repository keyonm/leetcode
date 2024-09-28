// https://leetcode.com/problems/longest-consecutive-sequence

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int longest = 0;
        int curr = 1;
        int i = 0;
        if (nums.size() == NULL) {
            return 0;
        }

        if (nums.size() == 1) {
            return 1;
        }

        std::sort(nums.begin(), nums.end());
        while (i < nums.size() - 1) {
            if (nums[i] == nums[i+1] - 1) {
                curr++;
            } else if (nums[i] != nums[i+1]){
                curr = 1;
            }
            
            if (curr > longest) {
                longest = curr;
            }
            i++;
        }
        return longest;
    }
};