// https://leetcode.com/problems/two-sum

class Solution {
    public int[] twoSum(int[] nums, int target) {
        for(int i = 0; i < nums.length-1; i++){
            for (int j = i+1; j < nums.length; j++){
                if (nums[i] + nums[j] == target){
                    int[] returnArray = new int[2];
                    returnArray[0] = i;
                    returnArray[1] = j;
                    return returnArray;
                }
            }
        }

        return null;
    }
}