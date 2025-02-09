class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        unordered_map<int,vector<int>> diagnols;
        for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                    {
                        diagnols[i-j].push_back(grid[i][j]);
                    }
            }
        for(auto& [key,values] : diagnols)
            {
                if(key < 0)
                {
                    sort(values.begin(),values.end(),greater<int>());
                }
                else
                {
                    sort(values.begin(),values.end());
                }
            }
        for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                    {
                        grid[i][j]=diagnols[i-j].back();
                        diagnols[i-j].pop_back();
                    }
            }
        return grid;
    }
};