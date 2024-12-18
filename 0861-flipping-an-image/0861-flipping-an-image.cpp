class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n=image.size(),m=image[0].size();
        vector<vector<int>> res(n,vector<int>(m));
        for(int i=0;i<n;i++)
        {
            int j=0,k=m-1;
            while(j<m && k>=0)
            {
                if (image[i][j]==0)
                {
                    res[i][k]=1;
                }
                else
                {
                    res[i][k]=0;
                }
                j++;
                k--;
            }
        }
        return res;
    }
};