class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        double mini=INT_MAX;
        int n=nums.size(),i=0,j=nums.size()-1;
        while(i<n/2 && j>=n/2)
        {
            double val = (nums[i]+nums[j])/2.0;
            mini=min(mini,val);
            i++;
            j--;
        }
        return mini;    
    }
};