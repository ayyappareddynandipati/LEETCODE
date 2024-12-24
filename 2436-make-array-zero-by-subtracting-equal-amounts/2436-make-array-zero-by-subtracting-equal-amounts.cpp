class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        set<int> res(nums.begin(),nums.end());
        int cnt=0;
        for(int n : res)
        {
            if (n > 0)
            {
                cnt++;
            }
        }
        return cnt;
    }
};