class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        if (matrix.size() == 0) {
            return 0;
        } 

        for (int i = 1; i < matrix.size(); ++i) {
            for (int j = 0; j < matrix[i].size(); ++j) {
                int small = matrix[i - 1][j];
                if (j != 0) {
                    small = min(small, matrix[i - 1][j - 1]);
                }

                if (j != (matrix[i].size() - 1)) { 
                    small = min(small, matrix[i - 1][j + 1]);
                }

                matrix[i][j] += small;
            }
        }

        int small = matrix[matrix.size() - 1][0];
        for (int i = 1; i < matrix[0].size(); ++i) {
            small = min(small, matrix[matrix.size() - 1][i]);
        }

        return small;
    }
};