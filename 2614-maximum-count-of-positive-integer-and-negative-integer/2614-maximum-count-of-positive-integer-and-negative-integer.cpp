class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int pcnt=-1,ncnt=-1;
        int n=nums.size();
        int low=0,high=nums.size()-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]<0){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        ncnt=low;
        low=0,high=nums.size()-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]>0){
                // pcnt=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        pcnt=low;
        return max(n-pcnt,ncnt);
    }
};