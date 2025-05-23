class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int res = 0;
        for(int i = 0; i < matrix.size(); i++) {
            for(int j = 0; j < matrix[0].size(); j++) {
                if(i > 0 && j > 0 && matrix[i][j] > 0) {
                    matrix[i][j] = max(matrix[i][j], 1 + min(
                        min(matrix[i - 1][j], matrix[i][j - 1]),
                        matrix[i - 1][j - 1]
                    ));
                }
                res += matrix[i][j];
            }
        }
        return res;
    }
};