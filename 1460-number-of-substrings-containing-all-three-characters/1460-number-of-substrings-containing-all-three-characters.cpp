class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.size();
        int left = 0;
        int cnt = 0;
        vector<int>count(3,0);
        for (int i = 0; i < n; i++) {
            count[s[i]-'a']++;
            while (count[0] > 0 && count[1] > 0 && count[2] > 0) {
                cnt += n-i; 
                count[s[left]-'a']--;
                left++;
            }
        }

        return cnt;
    }
};