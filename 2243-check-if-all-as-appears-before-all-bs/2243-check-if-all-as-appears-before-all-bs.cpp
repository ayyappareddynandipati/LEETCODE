class Solution {
public:
    bool checkString(string s) {
        int acnt=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='a')
            {
                acnt++;
            }
        }
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='a')
            {
                acnt--;
            }
            if(acnt>0 && s[i]=='b')
            {
                return false;
            }
        }
        return true;
    }
};