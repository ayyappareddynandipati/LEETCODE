class Solution {
public:
    bool isValid(string s) {
        string res = "";
        for (char c : s) {
            if (!res.empty() && 
                ((c == ')' && res.back() == '(') || 
                 (c == '}' && res.back() == '{') || 
                 (c == ']' && res.back() == '['))) {
                res.pop_back();
            } 
            else {
                res += c;
            }
        }
        return res.empty();
    }
};