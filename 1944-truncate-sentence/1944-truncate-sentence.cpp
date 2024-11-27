class Solution {
public:
    string truncateSentence(string s, int k) {
        vector<int> res;
        for(int i=0;i<s.size();i++)
        {
            if (s[i]==' ' && s[0]!=' ' && s[s.size()-1]!=' ')
                {
                    res.push_back(i);
                }
        }
        string s1="";
        if (res.size()<k) return s;
        for(int j=0;j<res[k-1];j++)
        {
            s1+=s[j];
        }
        return s1;

    }
};