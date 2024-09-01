class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> res(m,vector<int>(n));
        int k=0,osize=original.size();
        if (osize!=m*n) return {};
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                res[i][j]=original[k++];
            }
        }
        return res;
    }
};