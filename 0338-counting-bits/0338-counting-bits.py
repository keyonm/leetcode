class Solution(object):
    def countBits(self, n):
        """
        :type n: int
        :rtype: List[int]
        """
        
        arr = [0] * (n + 1)
        for x in range(1, n + 1):
            arr[x] = arr[x & (x - 1)] + 1

        return arr