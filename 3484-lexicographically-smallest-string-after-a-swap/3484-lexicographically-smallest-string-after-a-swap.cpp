class Solution {
public:
    string getSmallestString(string s) {
        for(int i=1;i<s.size();i++)
        {
            int a = s[i-1] - '0',b = s[i] - '0';
            if ((a%2)==(b%2) && a>b)
            {
                swap(s[i-1],s[i]);
                break;
            }
        }
        return s;
    }
};