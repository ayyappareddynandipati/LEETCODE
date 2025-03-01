class Solution {
public:
    bool isAnagram(string s1, string t1) {
        vector<int>arr(26,0);
        for(int i=0;i<s1.size();i++){
            arr[s1[i]-'a']++;
        }
        for(int i=0;i<t1.size();i++){
            arr[t1[i]-'a']--;
        }
        for(int i=0;i<26;i++){
            if(arr[i]!=0){
                return false;
            }
        }
        return true;
    }
    vector<int> findAnagrams(string s, string p) {
        vector<int>res;
        int n=s.size(),m=p.size(),i=0,j=n-m;
        while(i<=j){
            string s1=s.substr(i,m);
            if(isAnagram(s1,p)){
                res.push_back(i);
            }
            i++;
        }
        return res;
    }
};