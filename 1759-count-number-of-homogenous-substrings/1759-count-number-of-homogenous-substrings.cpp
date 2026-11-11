class Solution {
public:
    int countHomogenous(string s) {
        int ans = 0 ;
        int i = 1 , lastseen = 0 ;
        int mod = 1e9 + 7 ;
        while(i < s.size()){

            if(s[i] != s[lastseen]){
                long long len = i - lastseen ;
                ans += (len * (len + 1) / 2) % mod ;
                lastseen = i ;
            }
            i++ ;
        }
        long long len = i - lastseen;
        ans = (ans + len * (len + 1) / 2) % mod ;
        return ans ;
    }
};