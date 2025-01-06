class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        for(int i=0;i<numRows;i++)
        {
            vector<int> ans(i+1,1);
            int ans1=1;
            for(int j=1;j<=i;j++)
            {
                ans1=ans1*(i-j+1)/j;
                ans[j]=ans1;
            }
            res.push_back(ans);
        }
        return res;
    }
};