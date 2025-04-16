class Solution {
public:
    string longestPalindrome(string s) {
        if(s.size()==1) return s;
        string lps="";
        for(int i=0;i<s.size();i++){
            int low=i,high=i;
            while (low >= 0 && high < s.size() && s[low] == s[high]) {
                low--;
                high++;
            }
            string palindrome = s.substr(low+1,high - low - 1);
            if(palindrome.size()>lps.size()){
                lps=palindrome;
            }
            low=i-1,high=i;
            while (low >= 0 && high < s.size() && s[low] == s[high]) {
                low--;
                high++;
            }
            palindrome = s.substr(low+1,high - low - 1);
            if(palindrome.size()>lps.size()){
                lps=palindrome;
            }
        }
        return lps;
    }
};