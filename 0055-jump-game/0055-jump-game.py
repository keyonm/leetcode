class Solution:
    def canJump(self, nums: List[int]) -> bool:
        x = 0
        for n in nums:
            if x < 0:
                return False
            elif n > x:
                x = n
            x -= 1

        return True