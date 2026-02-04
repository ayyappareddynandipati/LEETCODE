class Solution {

    public boolean isPossible(int[] bloomDay, int m, int k, int day) {
        int took = 0;

        for (int i = 0; i < bloomDay.length; i++) {
            if (bloomDay[i] <= day) {
                took++;
                if (took == k) {
                    m--;
                    took = 0;  
                    if (m == 0) return true;
                }
            } else {
                took = 0;
            }
        }
        return false;
    }

    public int minDays(int[] bloomDay, int m, int k) {
        if ((long) bloomDay.length < (long) m * k) {
            return -1;
        }

        int l = 1;
        int r = 0;
        for (int d : bloomDay) {
            r = Math.max(r, d);
        }

        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (isPossible(bloomDay, m, k, mid)) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return l;
    }
}
