class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int m=s1.size(),n=s2.size();
        if(m>n) return false;
        vector<int>a(26,0),b(26,0);
        for(int i=0;i<m;i++){
            a[s1[i]-'a']++;
            b[s2[i]-'a']++;
        }
        if(a==b) return true;
        for(int i=m;i<n;i++){
            b[s2[i]-'a']++;     // increase incoming char count
            b[s2[i-m]-'a']--;   // decrease outgoing char count
            if(a==b) return true;
        }
        return false;
    }
};