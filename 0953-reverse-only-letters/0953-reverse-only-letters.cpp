class Solution {
public:
    string reverseOnlyLetters(string s) {
       string letters = "";
       string result = s;
        for(char c : s)
        {
            if (isalpha(c))
            {
                letters+=c;
            }
        }
        reverse(letters.begin(),letters.end());
        int letter_index = 0;
        for(int i=0;i<s.size();i++)
        {
            if (isalpha(s[i]))
            {
                result[i]=letters[letter_index++];
            }
        }
        return result;
    }
};