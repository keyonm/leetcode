class Solution {
public:
    vector<int> colorTheArray(int n, vector<vector<int>>& queries) {
        vector<int> nums(n, 0), result;
        int counter = 0;
        for (auto& query : queries) {
            int index = query[0], color = query[1];
            int pre = (index > 0) ? nums[index - 1] : 0;
            int post = (index < n - 1) ? nums[index + 1] : 0;

            if (nums[index] && nums[index] == pre) counter--;
            if (nums[index] && nums[index] == post) counter--;
            nums[index] = color;
            if (nums[index] == pre) counter++;
            if (nums[index] == post) counter++;
            result.push_back(counter);
        }

        return result;
    }
};