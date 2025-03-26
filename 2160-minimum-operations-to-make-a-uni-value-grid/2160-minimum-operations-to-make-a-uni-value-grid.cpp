class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int>res;
        int rem = grid[0][0]%x;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]%x!=rem){
                    return -1;
                }
                res.push_back(grid[i][j]);
            }
        }
        sort(res.begin(),res.end());

        int median = res[res.size()/2];
        int steps=0;
        for(int i=0;i<res.size();i++){
            steps+=(abs(res[i]-median)/x);
        }
        return steps;
    }
};