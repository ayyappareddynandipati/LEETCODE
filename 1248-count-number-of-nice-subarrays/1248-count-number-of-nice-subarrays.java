class Solution {
    public int atMostk(int []arr, int k){
           int l=0;
        int n=arr.length;
        int temp=0;
        int ans=0;
        for(int r=0;r<n;r++){
            if(arr[r]%2==1){
                temp++;
            }
            while(temp>k){
                if(arr[l]%2==1){
                    temp--;
                }
                l++;
            }
         ans+=r-l+1;
        }
        return ans;
    }
    public int numberOfSubarrays(int[] nums, int k) {
      int finalAns= atMostk(nums,k)-atMostk(nums,k-1);
      return finalAns;
    }
}