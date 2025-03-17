class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(int n : nums){
            mpp[n]++;
        }
        for(auto n : mpp){
            if(n.second%2!=0){
                return false;
            }
        }
        return true;
    }
};