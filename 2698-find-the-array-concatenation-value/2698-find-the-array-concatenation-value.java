class Solution {
    public long findTheArrayConcVal(int[] nums) {
        long sum=0;
        int n = nums.length;
        int i=0,j=n-1;
        while(i<j)
        {
            String s = Integer.toString(nums[i])+Integer.toString(nums[j]);
            sum+=Integer.parseInt(s);
            i++;
            j--;
        }
        if(i==j)
        {
            sum+=nums[i];
        }
        return sum;
    }
}