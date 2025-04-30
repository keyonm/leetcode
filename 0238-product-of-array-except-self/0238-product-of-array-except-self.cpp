class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zeros = 0;
        int productwithout = 1;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] == 0) {
                ++zeros;
            } else {
                productwithout *= nums[i];
            }
        }

        if (zeros > 1) {
            vector<int> ret(nums.size(), 0);
            return ret;
        }

        vector<int> ret;
        for (int i = 0; i < nums.size(); ++i) {
            if (zeros == 1) {
                if (nums[i] == 0) {
                    ret.push_back(productwithout);
                } else {
                    ret.push_back(0);
                }
            } else {
                ret.push_back(productwithout/nums[i]);
            }
        }

        return ret;
    }
};