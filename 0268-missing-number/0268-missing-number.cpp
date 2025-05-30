class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size(),xor1=0,xor2=0;
        for(int i=0;i<n;i++){
            xor1^=nums[i];
            xor2^=i;
        }
        xor2^=n;
        return xor1^xor2;
    }
};