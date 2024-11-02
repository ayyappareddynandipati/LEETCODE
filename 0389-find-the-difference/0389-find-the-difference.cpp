class Solution {
public:
    char findTheDifference(string s, string t) {
        int ssize=s.size();
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        for(int i=0;i<ssize;i++)
        {
            if (s[i]!=t[i])
            {
                return t[i];
            }
        } 
        return t.back();
    }
};