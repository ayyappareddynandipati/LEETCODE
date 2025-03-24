class Solution {
public:
    int sdThreshold(vector<int> nums,int val){
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=ceil((double)nums[i]/val);
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1,high=*max_element(nums.begin(),nums.end());
        while(low<=high){
            int mid=low + (high - low) / 2;
            int sd = sdThreshold(nums,mid);
            if(sd>threshold){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return low;
    }
};