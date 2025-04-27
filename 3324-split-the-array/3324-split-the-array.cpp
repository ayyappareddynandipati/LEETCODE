class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        vector<int>arr(101);
        for(auto num : nums){
            if(arr[num]++>1){
                return false;
            }
        }
        return true;
    }
};