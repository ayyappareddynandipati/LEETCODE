class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int m=grid.size(), n=grid[0].size();
        vector<int> rowWise(m,0),colWise(n,0);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]){
                    rowWise[i]++;
                    colWise[j]++;
                }
            }
        }
        int result=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j] && (rowWise[i] > 1 || colWise[j] > 1)){
                    result++;
                }
            }
        }
        return result;
    }
};