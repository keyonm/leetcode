class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        highest = curr = nums[0]

        for num in nums[1:]:
            curr = max(num, curr + num)
            highest = max(highest, curr)

        return highest