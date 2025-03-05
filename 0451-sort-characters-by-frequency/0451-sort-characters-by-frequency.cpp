class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mpp;
        for(int i = 0; i < s.size(); i++) mpp[s[i]]++;

        sort(s.begin(), s.end(), [&](char a, char b) {
            return mpp[a] > mpp[b] || (mpp[a] == mpp[b] && a < b);
        });
        return s;
    }
};