class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>res;
        int mini = *min_element(nums.begin(),nums.end());
        int maxi = *max_element(nums.begin(),nums.end());
        unordered_set<int> st(nums.begin(),nums.end());
        for(int i=mini;i<maxi;i++){
            if(!st.count(i)){
                res.push_back(i);
            }
        }
        return res;
    }
};