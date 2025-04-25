class Solution {
public:
    int countPartitions(vector<int>nums,int maxSum){
        long long subarraysum=0;
        int partitions=1;
        for(int i=0;i<nums.size();i++){
            if(subarraysum+nums[i]>maxSum){
                partitions++;
                subarraysum=nums[i];
            }else{
                subarraysum+=nums[i];
            }
        }
        return partitions;
    }
    int splitArray(vector<int>& nums, int k) {
       int low=*max_element(nums.begin(),nums.end());
        int high=accumulate(nums.begin(),nums.end(),0);
        while(low<high){
            int mid=low+(high-low)/2;
            int partitions = countPartitions(nums,mid);
            if(partitions<=k){
                high=mid;
            }else{
                low=mid+1;
            }
        }
        return low; 
    }
};