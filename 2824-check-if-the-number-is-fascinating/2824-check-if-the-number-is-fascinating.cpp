class Solution {
public:
    bool isFascinating(int n) {
        int a=2*n,b=3*n; 
        string s = to_string(n)+to_string(a)+to_string(b);
        sort(s.begin(),s.end());
        for(int i=0;i<s.size()-1;i++)
        {
            if (s[i]==s[i+1] || s[i]=='0')
            {
                return false;
                break;
            }
            
        } 
        return true;
    }
};