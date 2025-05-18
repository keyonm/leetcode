class Solution:
    def hammingWeight(self, n: int) -> int:
        counter = 0
        while n is not 0:
            if (1 & n) == 1:
                counter += 1
            n = n >> 1

        return counter