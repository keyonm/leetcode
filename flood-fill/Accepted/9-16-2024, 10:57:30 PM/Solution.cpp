// https://leetcode.com/problems/flood-fill

class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int color) {
        // If the source cell already has the same value as `color`, return the
        // original image
        if (image[sr][sc] == color) {
            return image;
        }

        // Storing the original value of the starting cell
        int oldcolor = image[sr][sc];
        // Replacing the value of the starting cell with the specified color
        image[sr][sc] = color;

        // Calling the dfs function to replace the values of all connected cells
        dfs(image, sr, sc, oldcolor, color);

        // Return the modified image
        return image;
    }

    void dfs(vector<vector<int>>& grid, int row, int col, int oldTarget,
             int newTarget) {
        // Defining the four cells adjacent to the starting cell
        vector<vector<int>> adjacentCells = {
            {0, 1},  // move right
            {1, 0},  // move down
            {-1, 0}, // move up
            {0, -1}  // move left
        };

        // Get the dimensions of the grid
        int gridLength = grid.size();
        int totalCells = grid[0].size();

        // For each cell in the list of adjacent cells
        for (const auto& cellValue : adjacentCells) {
            int r = row + cellValue[0];
            int c = col + cellValue[1];

            // If the adjacent cell is within the bounds of the grid
            // and has the same value as the starting cell
            if (r < gridLength && r >= 0 && c < totalCells && c >= 0 &&
                grid[r][c] == oldTarget) {
                // Replace the value of the adjacent cell with the specified
                // target
                grid[r][c] = newTarget;
                // Recursively call the dfs function on the adjacent cell
                dfs(grid, r, c, oldTarget, newTarget);
            }
        }
    }
};