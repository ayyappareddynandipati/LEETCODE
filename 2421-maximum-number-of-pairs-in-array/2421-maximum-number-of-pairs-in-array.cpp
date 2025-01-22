class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        map<int,int> mpp;
        for(auto num : nums)
        {
            mpp[num]++;
        }
        int paircnt=0,sincnt=0;
        for(auto num : mpp)
        {
            paircnt+=num.second/2;
            sincnt+=num.second%2;
        }
        return {paircnt,sincnt};
    }
};