class Solution {
public:
    vector<int> getElementsOnlyInFirstList(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> onlyIn1;
        unordered_set<int> in2;

        for (int num : nums2) {
            in2.insert(num);
        }

        for (int num : nums1) {
            if (in2.find(num) == in2.end()) {
                onlyIn1.insert(num);
            }
        }

        return vector<int> (onlyIn1.begin(), onlyIn1.end());
    }

    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        return {getElementsOnlyInFirstList(nums1, nums2), getElementsOnlyInFirstList(nums2, nums1)};
    }
};