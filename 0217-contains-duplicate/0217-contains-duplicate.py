class Solution(object):
    def containsDuplicate(self, nums):
        dict = set()
        for val in nums:
            if val in dict:
                return True
            dict.add(val)
        return False
        