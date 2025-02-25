class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0,maxi=INT_MIN,i=0;
        while(i<nums.size()){
            if(sum>=0){
                sum+=nums[i];
                maxi=max(maxi,sum);
            }
            else{
                sum=nums[i];
                maxi=max(maxi,sum);
            }
            i++;
        }
        return maxi;
    }
};