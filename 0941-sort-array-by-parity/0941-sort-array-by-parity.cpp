class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);
        int i=0,j=n-1;
        for(int num : nums)
        {
            if (num%2==0)
            {
                res[i]=num;
                i++;
            }
            else
            {
                res[j]=num;
                j--;
            }
        }
        return res;
    }
};