class Solution {
public:
string build(string &s){
        string temp = "";
        int n = s.size();
        int i = 0;
        while(i < n){
            if(s[i] != '#'){
                temp.push_back(s[i]);
            } 
            else if(temp.size() > 0){
            temp.pop_back();
            }
            i++;
        }
        return temp;
    }
    bool backspaceCompare(string s, string t) {
        string temp_s=build(s);
        string temp_t=build(t);
        return temp_s == temp_t;
    }
};