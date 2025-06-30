class Solution {
public:
    void decomRLEL(int freq, int val, vector<int> &res){
        while(freq--){
            res.push_back(val);
        }
    }
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int>res;
        for(int i=0;i<nums.size();i+=2){
            decomRLEL(nums[i],nums[i+1],res);
        }
        return res;
    }
};