class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>mpp1,mpp2;
        for(int i=0;i<s.size();i++){
            auto it1 = mpp1.find(s[i]);
            if(it1==mpp1.end()){
                mpp1[s[i]]=t[i];
            }else if(it1!=mpp1.end()){
                if (it1->second != t[i]) {
                    return false;
                }
            }
            auto it2 = mpp2.find(t[i]);
            if(it2==mpp2.end()){
                mpp2[t[i]]=s[i];
            }else if(it2!=mpp2.end()){
                if(it2->second!=s[i]){
                    return false;
                }
            }
        }
        return true;
    }
};