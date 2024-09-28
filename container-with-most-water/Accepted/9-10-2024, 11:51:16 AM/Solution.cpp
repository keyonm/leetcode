// https://leetcode.com/problems/container-with-most-water

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int max = 0;
        while (left < right) {
            if ((right-left) * min(height[left],height[right]) > max) {
                max = (right - left) * min(height[left],height[right]);
            }

            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }

        return max;
    }
};