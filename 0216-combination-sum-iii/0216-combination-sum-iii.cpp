class Solution {
public:
    vector<vector<int>> res;
    void backtrack(vector<int>& temp,int k,int target, int index){
        if(temp.size() == k && target == 0){
            res.push_back(temp);
            return;
        }
        for(int i = index;i <= 9;i++){
            if(i > target) break;
            temp.push_back(i);
            backtrack(temp,k,target - i,i + 1);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> temp;
        backtrack(temp,k,n,1);
        return res;
    }
};