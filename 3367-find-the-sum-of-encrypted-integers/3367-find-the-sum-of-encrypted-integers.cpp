class Solution {
public:
    int encrypt(int val)
    {
        int maxi = 0,cnt=0;
        string s = "";
        while(val!=0)
        {
            int rem = val%10;
            maxi=max(maxi,rem);
            val/=10;
            s+='1';
        }
        return maxi*stoi(s);
    }
    int sumOfEncryptedInt(vector<int>& nums) {
        int n = nums.size();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=encrypt(nums[i]);
        }
        return sum;
    }
};