class Solution {
    public int findLengthOfLCIS(int[] nums) {
        int cnt=0,maxi=0;
        int n=nums.length;
        for(int i=0;i<n-1;i++)
        {
            if (nums[i]<nums[i+1])
            {
                cnt++;
                maxi=Math.max(cnt,maxi);
            }
            else
            {
                cnt=0;
            }
        }  
        return maxi+1; 
    }
}