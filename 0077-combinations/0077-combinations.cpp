class Solution {
    void generateCombinations(vector<vector<int>>& res,vector<int>& ans,int n,int k,int start)
    {
        if (ans.size()==k)
        {
            res.push_back(ans);
            return ;
        }
        for(int i=start;i<=n;i++)
        {
            ans.push_back(i);
            generateCombinations(res,ans,n,k,i+1);
            ans.pop_back();
        }
    }
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> ans;
        generateCombinations(res,ans,n,k,1);
        return res;
    }
};