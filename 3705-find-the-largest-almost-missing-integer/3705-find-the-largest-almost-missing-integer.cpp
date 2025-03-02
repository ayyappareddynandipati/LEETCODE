class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> freqMap;

        for (int i = 0; i <= n - k; ++i) {
        unordered_map<int, bool> seen; 
            for (int j = i; j < i + k; ++j) {
                if (!seen[nums[j]]) {
                    freqMap[nums[j]]++;
                    seen[nums[j]] = true;
                }
            }
        }

        int result = -1;
        for (const auto& entry : freqMap) {
            if (entry.second == 1) {
                result = max(result, entry.first);
            }
        }

        return result;
    }
};