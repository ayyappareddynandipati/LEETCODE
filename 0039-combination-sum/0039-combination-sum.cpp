class Solution {
public:
    vector<vector<int>> ans;
    void backtrack(vector<int> cand, vector<int> temp, int target, int start){
        if(target == 0){
            ans.push_back(temp);
            return;
        }
        for(int i=start;i<cand.size();i++){
            if(cand[i] > target) continue;
            temp.push_back(cand[i]);
            backtrack(cand,temp,target-cand[i],i);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>temp;
        backtrack(candidates,temp,target,0);
        return ans;
    }
};