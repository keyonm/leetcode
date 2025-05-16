class Solution(object):
    def productExceptSelf(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        answer = [0] * len(nums)
        answer[0] = 1
        for i in range (1, len(nums)):
            answer[i] = nums[i - 1] * answer[i - 1]
        
        right = 1
        for i in reversed(range(len(nums))):
            answer[i] = answer[i] * right
            right *= nums[i]

        return answer