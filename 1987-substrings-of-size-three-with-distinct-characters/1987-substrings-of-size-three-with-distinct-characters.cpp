class Solution {
public:
    int countGoodSubstrings(string s) {
        int cnt=0,n=s.size();
        for(int i=1;i<n-1;i++)
        {
            if (s[i-1]!=s[i] && s[i]!=s[i+1] && s[i+1]!=s[i-1])
            {
                cnt++;
            }
        }
        return cnt;
    }
};