class Solution:
    def minimumOperationsToWriteY(self, grid: list[list[int]]) -> int:
        n = len(grid)
        c = n // 2
        cntY, cntN = [0, 0, 0], [0, 0, 0]
        totY, totN = 0, 0
        for i in range(n):
            for j in range(n):
                isY = (i == j and i <= c) or (i + j == n - 1 and i <= c) or (j == c and i >= c)
                if isY:
                    cntY[grid[i][j]] += 1
                    totY += 1
                else:
                    cntN[grid[i][j]] += 1
                    totN += 1
        ans = float('inf')
        for a in range(3):
            for b in range(3):
                if a == b:
                    continue
                ans = min(ans, (totY - cntY[a]) + (totN - cntN[b]))
        return ans