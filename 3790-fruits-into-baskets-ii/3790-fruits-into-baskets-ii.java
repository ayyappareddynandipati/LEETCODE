public class Solution {

    public int numOfUnplacedFruits(int[] fruits, int[] baskets) {
        int n = fruits.length;
        int count = 0; // number of successfully placed fruits
        boolean[] used = new boolean[n]; // to track used baskets

        for (int i = 0; i < n; i++) {
            boolean placed = false;
            for (int j = 0; j < n; j++) {
                if (!used[j] && baskets[j] >= fruits[i]) {
                    used[j] = true; // mark basket as used
                    placed = true;
                    count++;
                    break;
                }
            }
        }

        return n - count; // unplaced fruits
    }

    public static void main(String[] args) {
        Solution sol = new Solution();

        int[] fruits = {4, 2, 7};
        int[] baskets = {5, 3, 4};

        int result = sol.numOfUnplacedFruits(fruits, baskets);
        System.out.println("Unplaced fruits: " + result);  // Output: 1
    }
}
