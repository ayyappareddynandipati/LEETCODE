class Solution {
public:
    string removeStars(string s) {
        string res="";
        int i=0;
        for(char c:s){
            if(c=='*'){
                i--;
            }else{
                s[i++]=c;
            }
        }
        return s.substr(0,i);
    }
};