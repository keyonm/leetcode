class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        if (nums.size() < 3) {
            return false;
        }
        
        int first = 2147483647;
        int second = 2147483647;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] > first && nums[i] > second) {
                return true;
            } else if (nums[i] < first) {
                first = nums[i];
            } else if (nums[i] < second && nums[i] != first) {
                second = nums[i];
            }
        }

        return false;
    }
};