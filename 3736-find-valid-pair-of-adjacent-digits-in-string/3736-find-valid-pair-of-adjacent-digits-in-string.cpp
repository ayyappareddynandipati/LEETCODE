class Solution {
public:
    string findValidPair(string s) {
        string res="";
        map<char,int> mpp;
        for(auto val:s)
            {
                mpp[val]++;
            }
        for(int s1=0;s1<s.size()-1;s1++)
            {
                if(s[s1]!=s[s1+1])
                {
                    if(mpp[s[s1]] == (s[s1]-'0') && mpp[s[s1+1]] == (s[s1+1]-'0'))
                    {
                        res+=s[s1];
                        res+=s[s1+1];
                        return res;
                    }
                }
            }
        return "";
    }
};