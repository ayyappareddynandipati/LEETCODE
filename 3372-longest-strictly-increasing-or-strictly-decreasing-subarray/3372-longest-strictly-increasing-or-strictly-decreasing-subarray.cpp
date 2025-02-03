class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size(),longest=1;
        int increase=1,decrease=1;
        for(int i=0;i<n-1;i++)
        {
            if(nums[i] < nums[i+1]) increase++;
            else increase=1;
            if(nums[i]>nums[i+1]) decrease++;
            else decrease=1;
            longest=max({longest,increase,decrease});
        }
        return longest;
    }
};