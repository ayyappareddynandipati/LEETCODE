class Solution {
public:
    int countLargestGroup(int n) {
        int count[37] = {}; // digit sums from 1 to 36 possible
        int maxSize = 0;

        for (int i = 1; i <= n; ++i) {
            int sum = 0, num = i;
            while (num > 0) {
                sum += num % 10;
                num /= 10;
            }
            count[sum]++;
            maxSize = max(maxSize, count[sum]);
        }

        int result = 0;
        for (int i = 1; i <= 36; ++i) {
            if (count[i] == maxSize) {
                result++;
            }
        }

        return result;
    }
};