class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> new_grid(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                new_grid[(i+(j+k)/m)%n][(j+k)%m] = grid[i][j];
            }
        }
        return new_grid;
    }
};
