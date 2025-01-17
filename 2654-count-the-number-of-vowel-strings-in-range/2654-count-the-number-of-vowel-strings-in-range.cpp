class Solution {
public:
    bool isVowel(char s)
    {
        return s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u';
    }
    int vowelStrings(vector<string>& words, int left, int right) {
        int cnt=0;
        for(int i=left;i<=right;i++)
        {
            int n = words[i].size();
            if (n > 0 && isVowel(words[i][0]) && isVowel(words[i][n-1]))
            {
                cnt++;
            }
        }
        return cnt;
    }
};