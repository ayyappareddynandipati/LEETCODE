class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> nums = {1};
        int i2 = 0, i3 = 0, i5 = 0;
        for(int i = 1; i < n; i++) {
            int nextNum = min(nums[i2] * 2, min(nums[i3] * 3, nums[i5] * 5));
            nums.push_back(nextNum);
            if(nextNum == nums[i2] * 2) i2 += 1;
            if(nextNum == nums[i3] * 3) i3 += 1;
            if(nextNum == nums[i5] * 5) i5 += 1;
        }
        return nums[n - 1];
    }
};