class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        vector<vector<int>> dp(n);
        int mini = INT_MAX;
        for(int i = 0;i < n;i++){
            int m = triangle[i].size();
            dp[i] = vector<int>(m);
            for(int j = 0;j < m;j++){
                if(i == 0){
                    dp[i][j] = triangle[i][j];
                }else if(j == 0){
                    dp[i][j] = dp[i-1][j] + triangle[i][j];
                }else if(j == m - 1){
                    dp[i][j] = dp[i-1][j-1] + triangle[i][j];
                }else {
                    dp[i][j] = min(dp[i-1][j-1],dp[i-1][j]) + triangle[i][j];
                }if(i == n - 1){
                    mini = min(mini,dp[i][j]);
                }
            }
        }
        return mini;
    }
};