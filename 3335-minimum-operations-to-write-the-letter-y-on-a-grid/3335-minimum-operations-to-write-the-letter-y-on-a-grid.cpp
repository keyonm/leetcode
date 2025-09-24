class Solution {
public:
    int minimumOperationsToWriteY(vector<vector<int>>& grid) {
        int totY = 0;
        int notY = 0;
        vector<int> yCounts = {0, 0, 0};
        vector<int> notYCounts = {0, 0, 0};
        int n = grid.size();
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                bool isY = ((i <= n / 2) && ((i == j) || (i + j == n - 1))) || (i > n / 2 && j == n / 2);
                if (isY) {
                    ++yCounts[grid[i][j]];
                    ++totY;
                } else {
                    ++notYCounts[grid[i][j]];
                    ++notY;
                }
            }
        }

        int min = std::numeric_limits<int>::max();
        for (int i = 0; i < 3; ++i) { 
            for (int j = 0; j < 3; ++j) {
                if (i == j) continue;
                int changeY = totY - yCounts[i];
                int changeNotY = notY - notYCounts[j];
                min = std::min(min, changeY + changeNotY);
            } 
        }

        return min;
    }
};