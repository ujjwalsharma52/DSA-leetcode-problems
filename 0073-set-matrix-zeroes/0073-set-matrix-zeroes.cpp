class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        
        bool row0 = false, col0 = false;
        
        // Step 1: check first column
        for (int i = 0; i < m; i++) {
            if (matrix[i][0] == 0) col0 = true;
        }
        
        // Step 2: check first row
        for (int j = 0; j < n; j++) {
            if (matrix[0][j] == 0) row0 = true;
        }
        
        // Step 3: mark
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                if (matrix[i][j] == 0) {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }
        
        // Step 4: update matrix
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }
        
        // Step 5: handle first row
        if (row0) {
            for (int j = 0; j < n; j++) {
                matrix[0][j] = 0;
            }
        }
        
        // Step 6: handle first column
        if (col0) {
            for (int i = 0; i < m; i++) {
                matrix[i][0] = 0;
            }
        }
    }
};