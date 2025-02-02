class Solution {
public:
    int maxDifference(string s) {
        map<char,int> mpp;
        for(auto it : s)
            {
                mpp[it]++;
            }
        int even=INT_MAX;
        int odd=0;
        for(auto mp : mpp)
            {
                int cnt=mp.second;
                if(cnt%2==0)
                {
                    even=min(even,cnt);
                }
                else
                {
                    odd=max(odd,cnt);
                }
            }
        return (odd == 0 || even == INT_MAX) ? 0 : odd-even;
    }
};