class Solution {
public:
    string removeOuterParentheses(string s) {
        int n = s.size();
        int cnt = 0, prev = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '(') {
                cnt++;
            }
            if (s[i] == ')') {
                cnt--;
            }
            if (i != 0 && cnt == 0) {
                s.erase(prev, 1); 
                s.erase(i - 1, 1); 
                prev = i;         
                n-=2;             
                i-=2;
            }
        }
        
        return s;
    }
};
