class Solution(object):
    def maxSubArray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        answer = nums[0]
        curr = nums[0]

        for i in range(len(nums))[1:]:
            curr = max(nums[i], curr + nums[i])
            answer = max(answer, curr)

        return answer