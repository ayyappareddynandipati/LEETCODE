class Solution {
public:
    string reverseWords(string s) {
        string res = "", temp = "";
        // Trim leading spaces
        int n = s.size();
        int i = 0;
        while (i < n && s[i] == ' ') {
            i++;
        }
        for (int j=i; j < n; j++) {
            char c = s[j];
            if (c != ' ') {
                temp += c; 
            } else if (!temp.empty()) {
                if (!res.empty()) {
                    res = temp + " " + res; 
                } else {
                    res = temp; 
                }
                temp = ""; 
            }
        }

        if (!temp.empty()) {
            if (!res.empty()) {
                res = temp + " " + res;
            } else {
                res = temp;
            }
        }
        return res;
    }
};