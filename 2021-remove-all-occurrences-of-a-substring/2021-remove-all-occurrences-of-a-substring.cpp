class Solution {
public:
    string removeOccurrences(string s, string part) {
        string res="";
        for(char c : s)
        {
            res+=c;
            int val = res.find(part);
            if(val!=-1)
            {
                res.erase(val,part.size());
            }
        }
        return res;
    }
};