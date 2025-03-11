class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.size();
        int left = 0;
        int cnt = 0;
        unordered_map<char, int> freq;
        for (int right = 0; right < n; ++right) {
            freq[s[right]]++;
            while (freq['a'] > 0 && freq['b'] > 0 && freq['c'] > 0) {
                cnt += (n - right); 
                freq[s[left]]--;
                left++;
            }
        }

        return cnt;
    }
};