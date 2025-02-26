class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int max_sum = 0, min_sum = 0;

        for (int num : nums) {
            min_sum=min(0,min_sum+num);
            max_sum=max(0,max_sum+num);
        }
        return max_sum-min_sum;
    }
};

