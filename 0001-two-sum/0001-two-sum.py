class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        map = {}
        for i in range(len(nums)):
            find = target - nums[i]
            if find in map:
                return [i, map[find]]
            map[nums[i]] = i
        return []