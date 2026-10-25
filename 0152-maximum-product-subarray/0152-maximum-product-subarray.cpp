class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int currmin=nums[0],currmax=nums[0];
        int maxipro=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i] < 0){
                swap(currmin,currmax);
            }
        currmin=min(nums[i],currmin*nums[i]);
        currmax=max(nums[i],currmax*nums[i]); 
        maxipro=max(maxipro,currmax);
        }
        return maxipro;
    }
};