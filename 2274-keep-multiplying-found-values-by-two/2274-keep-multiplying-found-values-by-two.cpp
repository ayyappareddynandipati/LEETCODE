class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        unordered_set val(nums.begin(),nums.end());
        while(val.find(original)!=val.end()){
            original*=2;
        }
        return original;
    }
};