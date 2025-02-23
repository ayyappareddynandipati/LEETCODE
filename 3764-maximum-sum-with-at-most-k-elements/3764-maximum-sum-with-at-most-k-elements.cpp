class Solution {
public:
    long long maxSum(vector<vector<int>>& grid, vector<int>& limits, int k) {
        long long sum=0;
        int n = grid.size(),m=grid[0].size();
        vector<int> res;
        for(int i=0;i<n;i++){
            sort(grid[i].rbegin(),grid[i].rend());
            for(int j=0;j<min(m,limits[i]);j++){
                res.push_back(grid[i][j]);
            }
        }
        sort(res.rbegin(),res.rend());
        for(int i=0;i<k;i++){
            sum+=res[i];
        }
        return sum;
    }
};