class Solution {
public:
    string removeOuterParentheses(string s) {
        string res="";
        int cnt=0;
        for(char c : s){
            if(c=='(' && cnt++ > 0) res+=c;
            else if(c==')' && cnt-- > 1) res+=c;
        }
        return res;
    }
};