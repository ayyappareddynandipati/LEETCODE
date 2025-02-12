class Solution {
public:
    int balancedStringSplit(string s) {
        int cnt=0,res=0;
        for(char c : s)
        {
            c=='L' ? res++ : res--;
            if(res==0) cnt++;
        }
        return cnt;
    }
};