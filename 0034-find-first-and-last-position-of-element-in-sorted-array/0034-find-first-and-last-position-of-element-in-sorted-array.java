class Solution {
    public int LeftMost(int arr[],int target){
        int l=0;
        int r=arr.length-1;
        while(l<=r){
            int m=l+(r-l)/2;
            if(arr[m]>=target){
                r=m-1;
            }
            else{
                l=m+1;
            }
        }
        if(l>=arr.length){
            return -1;
        }
        if(arr[l]!=target){
            return -1;
        }
        return l;
    }
   public int RightMost(int arr[],int target){
    int l=0;
    int r=arr.length-1;
    while(l<=r){
        int m=l+(r-l)/2;
        if(arr[m]>target){
            r=m-1;
        }else{
            l=m+1;
        }
    }
    if(r<0){
        return -1;
    }
    if(arr[r]!=target){
        return -1;

    }
    return r;
   }

    public int[] searchRange(int[] nums, int target) {
        int lm=LeftMost(nums,target);
        int rm=RightMost(nums,target);
        int ans[]={lm,rm};
        return ans;
    }
}