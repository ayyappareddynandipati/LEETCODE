class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n=nums.size(),cnt=0;;
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
                nums[i]*=2;
                nums[i+1]=0;
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                swap(nums[i],nums[cnt++]);
            }
        }
        return nums;
    }
};