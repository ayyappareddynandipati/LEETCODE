class Solution {
    void generatePermutations(vector<vector<int>>& ans,vector<int>& nums,int index)
    {
        if (index==nums.size())
        {
            ans.push_back(nums);
            return;
        }
        for(int i=index;i<nums.size();i++)
        {
            swap(nums[index],nums[i]);
            generatePermutations(ans,nums,index+1);
            swap(nums[index],nums[i]);
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        generatePermutations(ans,nums,0);
        return ans;
    }
};