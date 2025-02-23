class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        for(int i=1;i<n;i++){
            nums[i]+=nums[i-1];
        }
        vector<int>res;
        for(auto q : queries){
            int val = upper_bound(nums.begin(),nums.end(),q)-nums.begin();
            res.push_back(val);
        }
        return res;

    }
};