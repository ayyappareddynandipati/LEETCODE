class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>res;
        for(int n : nums){
            string s = to_string(n);
            for(char c : s){
                res.push_back(c - '0');
            }
        }
        return res;
    }
};