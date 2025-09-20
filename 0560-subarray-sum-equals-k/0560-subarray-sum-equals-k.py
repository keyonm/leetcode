class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:
        sums = {}
        sums[0] = 1
        count = 0
        tot = 0
        for num in nums:
            tot += num
            if (tot - k) in sums:
                count += sums[tot - k]
            sums[tot] = sums.get(tot, 0) + 1

        return count