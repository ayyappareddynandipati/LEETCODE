class Solution {
public:
    int maxDepth(string s) {
        int maxi=0,cnt=0;
        for(char c : s){
            if(c=='('){
                cnt++;
                maxi=max(maxi,cnt);
            }
            if (c==')'){
                cnt--;
            }
        }
        return maxi;
    }
};