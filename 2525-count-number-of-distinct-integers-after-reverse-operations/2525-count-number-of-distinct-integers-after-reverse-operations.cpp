class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        int cnt=0,n=nums.size();
        int rem,sum;
        vector<int>res;
        for(int i=0;i<n;i++)
        {
            int temp=nums[i];
            sum=0;
            while(temp!=0)
            {
                rem=temp%10;
                sum=(sum*10)+rem;
                temp=temp/10;
            }
            res.push_back(sum);
        }
        set<int>res1;
        for(int i=0;i<n;i++)
        {
            res1.insert(res[i]);
            res1.insert(nums[i]);
        }
        return res1.size();
    }
};