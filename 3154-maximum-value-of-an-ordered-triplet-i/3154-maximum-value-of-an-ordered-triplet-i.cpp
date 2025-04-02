class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n = nums.size();
        long long maxi=0,max_i=nums[0],max_ij=LLONG_MIN;
        for(int j=1;j<n-1;j++){
            max_ij=max(max_ij,max_i-nums[j]);
            maxi=max(maxi,max_ij*nums[j+1]);
            max_i=max(max_i,(long long)nums[j]);
        }
        return maxi;
    }
};