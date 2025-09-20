class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        lowest = float("inf")
        highest = 0

        for i in range(len(prices)):
            if prices[i] < lowest:
                lowest = prices[i]
            elif prices[i] - lowest > highest:
                highest = prices[i] - lowest

        return highest