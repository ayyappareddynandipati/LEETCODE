class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int tsum=0,lsum=0;
        for(int i=0;i<nums.size();i++)
        {
            tsum+=nums[i];
        } 
        for(int i=0;i<nums.size();i++)
        {
            tsum-=nums[i];
            if (lsum==tsum)
            {
                return i;
            }
            lsum+=nums[i];
        }
        return -1;
    }
};