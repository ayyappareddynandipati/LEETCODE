class Solution {
    public int unequalTriplets(int[] nums) {
        int cnt=0,n=nums.length;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                for(int k=j+1;k<n;k++)
                {
                    if (nums[i]!=nums[j] && nums[j]!=nums[k] && nums[k]!=nums[i])
                    {
                        cnt++;
                    }
                }
            }
        }
        return cnt;
    }
}