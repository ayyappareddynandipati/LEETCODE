class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int low = 0, high = arr.size(); 
        while (low < high) {  
            int mid = low + (high - low) / 2;
            int missing = arr[mid] - (mid + 1);
            
            if (missing < k) {
                low = mid + 1;  // Need more missing numbers
            } else {
                high = mid;  // Reduce search space
            }
        }
        return k + low;  // Correct formula to return the kth missing number
    }
};
