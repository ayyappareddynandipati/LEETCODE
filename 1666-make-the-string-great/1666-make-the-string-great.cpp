class Solution {
public:
    string makeGood(string s) {
        int i=0;
        for(int j=0;j<s.size();j++){
            s[i]=s[j];
            if(i>0 && abs(s[i]-s[i-1])==32){
                i--;
            }else{
                i++;
            }
        }
        return s.substr(0,i);
    }
};