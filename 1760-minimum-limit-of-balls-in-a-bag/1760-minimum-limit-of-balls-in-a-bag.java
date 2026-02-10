class Solution {

    public boolean isPossible(int[] nums, int maxOperations, int k) {
        int ops = 0;

        for (int val : nums) {
            ops += (val - 1) / k;
            if (ops > maxOperations) {
                return false;
            }
        }
        return true;
    }

    public int minimumSize(int[] nums, int maxOperations) {
        int l = 1;
        int r = 0;

        for (int val : nums) {
            r = Math.max(r, val);
        }

        while (l <= r) {
            int mid = l + (r - l) / 2;

            if (isPossible(nums, maxOperations, mid)) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return l;
    }
}
