class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int min_val=INT_MAX,nums_size=nums.size();
        int i,j,k;
        bool ans=false;
        for(i=0;i<nums_size;i++)
        {
            for(j=i+1;j<nums_size;j++)
            {
                for(k=j+1;k<nums_size;k++)
                {
                    if (nums[i]<nums[j] && nums[k]<nums[j])
                    {
                        min_val=min(min_val,nums[i]+nums[j]+nums[k]);
                        ans=true;
                    }
                }
            }
        }
        if(ans) return min_val;
        return -1;  
    }
};