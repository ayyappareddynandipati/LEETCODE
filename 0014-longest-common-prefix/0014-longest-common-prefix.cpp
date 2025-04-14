class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int i=0,n=strs.size();
        string first=strs[0],last=strs[n-1];
        while(i<min(first.size(),last.size()) && first[i]==last[i]){
            i++;
        }
        return first.substr(0,i);
    }
};