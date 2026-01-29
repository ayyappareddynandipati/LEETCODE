class Solution {
    public int LeftMost(int[]nums,int target){
        int l=0;
        int r=nums.length-1;
        while(l<=r){
            int m=l+(r-l)/2;
            if(nums[m]>=target){
                r=m-1;
            }else{
                l=m+1;
            }
        }
        return l;
    }
    public int maximumCount(int[] nums) {
        int neg=LeftMost(nums,0);
        int one=LeftMost(nums,1);
        int pos=nums.length-one;
        return Math.max(neg,pos);
    }
}