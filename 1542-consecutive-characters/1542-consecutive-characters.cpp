class Solution {
public:
    int maxPower(string s) {
        int maxi = 1;
        int cnt=1;
        for(int i=0;i<s.size()-1;i++)
        {
            if (s[i]==s[i+1])
            {
                cnt++;
                maxi=max(cnt,maxi);
            }
            else
            { 
                cnt = 1;
            }
        }
        return maxi;
    }
};