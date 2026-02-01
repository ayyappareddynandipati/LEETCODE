class Solution { 
     public  boolean isPossible(int[] nums,int threshold,int k){
  
        for(int i=0;i<nums.length;i++){
            int upper=nums[i]/k;
            if(nums[i]%k!=0){
                upper++;
            }
          threshold-=upper;
          if(threshold<0){
              return false;
          }
        }
       return true;
    }
    public int smallestDivisor(int[] nums, int threshold) {
        int l=1;
int r=1000000;
while(l<=r){
    int m=l+(r-l)/2;
if(isPossible(nums,threshold,m)){
    r=m-1;
}else{
    l=m+1;
}
}return l;
    }
}