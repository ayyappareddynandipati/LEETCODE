class Solution {
    public int maximumDifference(int[] nums) {
        int n=nums.length;
        int max=-1;
        int leftmin=nums[0];
        for(int i=1;i<n;i++){
          int val=nums[i];
          if(leftmin<val){
            max=Math.max(max,val-leftmin);
          }
          leftmin=Math.min(leftmin,val);
                }
            
        
        return max;
    }}
