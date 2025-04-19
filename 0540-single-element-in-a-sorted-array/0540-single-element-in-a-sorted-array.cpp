class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int left = 0, right = nums.size() - 1;
        while (left < right) {
            int mid = left + (right - left) / 2;
            // Ensure mid is even
            if (mid % 2 == 1) {
                mid--; // Make it even to compare with its pair
            }
            // Compare with the next element
            if (nums[mid] == nums[mid + 1]) {
                // Unique element is in the right half
                left = mid + 2;
            } else {
                // Unique element is in the left half or at mid
                right = mid;
            }
        }
        return nums[left];
    }
};
