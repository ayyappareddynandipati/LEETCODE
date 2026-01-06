class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int , int> freq;
        vector<vector<int>> result;
        for(int a : nums){
            freq[a]++;
            int row = freq[a]-1;
            if(row == result.size()){
                result.push_back({});
            }
            result[row].push_back(a);
        }
        return result;
    }
};