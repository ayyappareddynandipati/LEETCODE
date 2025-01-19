class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int maxi=INT_MIN;
        int cnt=0;
        map<int,int> freq;
        for(auto num : nums)
        {
            freq[num]++;
        }
        for(auto n : freq)
        {
            maxi=max(maxi,n.second);
        }
        for(auto it : freq)
        {
            if (it.second==maxi)
            {
                cnt+=it.second;
            }
        }
        return cnt;
    }
};