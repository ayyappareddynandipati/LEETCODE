class Solution {
public:
    int minLength(string s) {
        int i=0;
        for(int j=0;j<s.size();j++){
            s[i]=s[j];
            if(i>0 && ((s[i]=='D' && s[i-1]=='C') || (s[i]=='B' && s[i-1]=='A'))){
                    i--;
            }else{
                i++;
            }
        }
        return i;
    }
};