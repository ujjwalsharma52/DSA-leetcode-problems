class Solution {
public:

    void dfs(vector<vector<char>>& grid, int i, int j) {

        // Boundary check
        if (i < 0 || i >= grid.size() ||
            j < 0 || j >= grid[0].size() ||
            grid[i][j] == '0') {
            return;
        }

        // Current land ko water mark kar do
        grid[i][j] = '0';

        // Up
        dfs(grid, i - 1, j);

        // Down
        dfs(grid, i + 1, j);

        // Left
        dfs(grid, i, j - 1);

        // Right
        dfs(grid, i, j + 1);
    }

    int numIslands(vector<vector<char>>& grid) {

        int count = 0;

        for (int i = 0; i < grid.size(); i++) {

            for (int j = 0; j < grid[0].size(); j++) {

                if (grid[i][j] == '1') {

                    count++;

                    dfs(grid, i, j);
                }
            }
        }

        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna