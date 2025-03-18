class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = binarySearch(nums, target, true);
        if (first == -1) return {-1, -1}; // If target is not found, return [-1, -1]
        int last = binarySearch(nums, target, false);
        return {first, last};
    }
    int binarySearch(vector<int>& nums, int target, bool findFirst) {
        int low = 0, high = nums.size() - 1, result = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2; // Avoid potential overflow
            if (nums[mid] == target) {
                result = mid;
                if (findFirst)
                    high = mid - 1; // Search left half for first occurrence
                else
                    low = mid + 1; // Search right half for last occurrence
            } else if (nums[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return result;
    }
};