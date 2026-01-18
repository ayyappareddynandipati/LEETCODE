class Solution {
    public int atMostk(int []nums,int k){
        if(k<0){
            return 0;
        }
        int n=nums.length;
        int l=0;
        int temp=0;
        int ans=0;
        for(int r=0;r<n;r++){
if(nums[r]==1){
    temp++;
}
while(temp>k){
    if(nums[l]==1){
        temp--;
    }
    l++;
}
ans+=r-l+1;
        }
        return ans;
    }
    public int numSubarraysWithSum(int[] nums, int goal) {
        return atMostk(nums,goal)-atMostk(nums,goal-1);
    }
}