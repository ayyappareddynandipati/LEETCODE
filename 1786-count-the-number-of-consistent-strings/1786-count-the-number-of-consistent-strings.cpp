class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        vector<int> Alpha(26, 0);
        for(int i = 0; i < allowed.size(); i++) {
            Alpha[allowed[i] - 'a'] = 1;
        }

        int cnt = 0;
        for(int i = 0; i < words.size(); i++) {
            bool flag = true;
            for(auto it : words[i]) {
                if(Alpha[it - 'a']  == 0) {
                    flag = false;
                    break;
                }
            }
            if(flag == true) cnt++;
        }
        return cnt;
    }
};