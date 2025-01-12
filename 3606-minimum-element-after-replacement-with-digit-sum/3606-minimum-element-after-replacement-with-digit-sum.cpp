class Solution {
public:
    int sumOfDigits(int val)
    {
        int sum=0;
        while(val!=0)
        {
            sum+=(val%10);
            val/=10;
        }
        return sum;
    }
    int minElement(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);
        for(int i=0;i<n;i++)
        {
            res[i] = sumOfDigits(nums[i]);
        }
        sort(res.begin(),res.end());
        return res[0];
    }
};