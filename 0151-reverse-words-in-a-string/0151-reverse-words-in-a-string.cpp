class Solution {
public:
    string reverseWords(string s) {
        string temp="",res="";
        int i=0,n=s.size();
        while(i<n){
            if(s[i]!=' '){
                temp+=s[i];
            }else if(temp!=""){
                res=temp+" " +res;
                temp="";
            }
            i++;
        }
        if (temp != "") {
            res = temp + " " + res;
        }
        while (!res.empty() && res[res.size() - 1] == ' ') {
            res.pop_back();
        }
        return res;
    }
};