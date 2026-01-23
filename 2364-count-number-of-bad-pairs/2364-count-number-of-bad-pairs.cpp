class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        unordered_map<long long, long long> freq;
        long long goodPairs = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            long long key = (long long)nums[i] - i;
            goodPairs += freq[key]; // pairs with previous same key
            freq[key]++;
        }
        
        long long n = nums.size();
        long long totalPairs = n * (n - 1) / 2;
        
        return totalPairs - goodPairs;
    }
};
