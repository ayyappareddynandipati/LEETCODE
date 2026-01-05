class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long sum = 0 ;
        int n = matrix.size() , m = matrix[0].size() ;
        int negcnt = 0 , mini = INT_MAX ;
        for( int i = 0 ; i < n ; i++){
            for( int j = 0 ; j < m ; j++){
                sum += abs ( matrix[i][j] ) ;
                if ( matrix[i][j] < 0) negcnt++ ;
                mini = min ( mini , abs ( matrix[i][j] ) ) ;
            }
        }
        if ( negcnt % 2 != 0 ) sum -= 2 * mini ;
        return sum;
    }
};