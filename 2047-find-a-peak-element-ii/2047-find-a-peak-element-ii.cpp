class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size(), m = mat[0].size();
        int left = 0, right = m - 1;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            
            // Find the row with the maximum value in this column
            int maxRow = 0;
            for (int i = 1; i < n; i++) {
                if (mat[i][mid] > mat[maxRow][mid]) {
                    maxRow = i;
                }
            }

            bool leftIsSmaller = (mid == 0 || mat[maxRow][mid] > mat[maxRow][mid - 1]);
            bool rightIsSmaller = (mid == m - 1 || mat[maxRow][mid] > mat[maxRow][mid + 1]);

            if (leftIsSmaller && rightIsSmaller) {
                return {maxRow, mid};
            } else if (mid < m - 1 && mat[maxRow][mid] < mat[maxRow][mid + 1]) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return {0,0}; 
    }
};
