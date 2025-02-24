class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mp;
        int l=0,r=0;
        int maxi=0;
        while(r < s.size()){
            mp[s[r]]++;
            if(mp[s[r]] == 2){
                while(mp[s[r]] != 1){
                    mp[s[l]]--;
                    l++;
                }
            }
            maxi=max((r-l)+1,maxi);
            
            r++;
        }
        return maxi;
    }
};