class Solution {
public:
    vector<string> ans;
    void backtrack(int n,string result,int open,int close){
        if(open == n && close == n){
            ans.push_back(result);
            return;
        }
        if(open < n){
            backtrack(n,result+"(",open+1,close);
        }if(close < open){
            backtrack(n,result+")",open,close+1);
        }
    }

    vector<string> generateParenthesis(int n) {
        string result="";
        backtrack(n,result,0,0);
        return ans;
    }
};