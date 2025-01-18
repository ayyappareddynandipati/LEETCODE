class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        map<int,int> freq;
        for(auto &i : nums)
        {
            freq[i]++;
        }
        int sum=0;
        for(auto it : freq)
        {
            if (it.second==1)
            {
                sum+=it.first;
            }
        }
        return sum;

    }
};