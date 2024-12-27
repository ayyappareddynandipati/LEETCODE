class Solution {
void subsets(vector<int>& num,int& n,vector<vector<int>>& res)
{ 
    int numofsub = 1 << n;
    for(int i=0;i<numofsub;i++)
    {
        vector<int> res1;
        for(int j=0;j<n;j++)
        {
            if (i & (1 << j))
            {
                res1.push_back(num[j]);
            }
        }
        res.push_back(res1);
    }
}
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        subsets(nums,n,res); 
        sort(res.begin(),res.end());
        auto it =  unique(res.begin(),res.end());
        res.erase(it,res.end());
        return res;
    }
};