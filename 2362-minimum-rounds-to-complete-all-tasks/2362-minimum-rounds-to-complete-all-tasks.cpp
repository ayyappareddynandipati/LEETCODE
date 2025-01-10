class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int> freq;
        for( auto num : tasks)
        {
            freq[num]++;
        }
        int cnt=0;
        bool ans = true;
        for(auto i : freq)
        {
            if (i.second==1)
            {
                return -1;
            }
            else
            {
                cnt+=(i.second+2)/3;
            }
        }
        return cnt;
    }
};