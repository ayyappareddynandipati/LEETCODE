class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int n=nums.size(),sum=nums[0],maxsum=0;
        for(int i=1;i<n;i++)
        {
            if(nums[i]>nums[i-1]) 
            {
                sum+=nums[i];
            }
            else {
                maxsum=max(sum,maxsum);
                sum=nums[i];
                }
        }
        return max(maxsum,sum);
    }
};