class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n = nums.size(),res;
        unordered_map<int,int> freq;
        for(auto it : nums)
        {
            freq[it]++;
            if (freq[it]==n/2)
            {
                res=it;
                break;
            }
        }
        return res;
    }
};