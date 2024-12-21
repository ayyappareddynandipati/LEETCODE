class Solution {
    public int[] sortArrayByParityII(int[] nums) {
        int n = nums.length,i=0,j=1;
        int res[] = new int[n];
        for(int k=0;k<n;k++)
        {
            if (nums[k]%2==0)
            {
                res[i]=nums[k];
                i+=2;
            }
            else
            {
                res[j]=nums[k];
                j+=2;
            }
        }
        return res;
    }
}