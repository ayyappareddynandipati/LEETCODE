class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        int n1 = words.size(),n2 = s.size();
        if(n1!=n2) return false;
        string res="";
        for(auto i : words)
        {
            res+=i[0];
        }
        cout<<res;
        return res==s;
    }
};