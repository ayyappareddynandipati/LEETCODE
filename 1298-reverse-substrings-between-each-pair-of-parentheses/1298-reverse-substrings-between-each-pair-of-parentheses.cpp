class Solution {
public:
    string reverseParentheses(string s) {
        string st = "";
        for (char c : s) {
            if (c != ')') {
                st += c;
            } else {
                string temp = "";
                while (!st.empty() && st.back() != '(') {
                    temp += st.back();
                    st.pop_back();
                }
                if (!st.empty() && st.back() == '(') {
                    st.pop_back(); // Remove the '('
                }
                st += temp; // Append the reversed string
            }
        }
        return st;
    }
};
