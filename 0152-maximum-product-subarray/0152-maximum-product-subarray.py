class Solution(object):
    def maxProduct(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        if len(nums) == 0:
            return 0
        
        high = low = res = nums[0]

        for i in range(1, len(nums)):
            curr = nums[i]
            temp = max(curr, max(curr * high, curr * low))
            low = min(curr, min(curr * high, curr * low))
            high = temp
            res = max(high, res)

        return res        