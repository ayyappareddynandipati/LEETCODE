class Solution {
public:
    double myPow(double x, int n) {
        // Base case
        if (n == 0) return 1;
        // Handle negative powers
        if (n < 0) {
            x = 1 / x;
            // To handle INT_MIN safely
            if (n == INT_MIN) {
                return x * myPow(x, -(n + 1));
            }
            n = -n;
        }
        // Recursive call
        double half = myPow(x, n / 2);
        // If power is even
        return n % 2 ? half * half * x : half * half;
    }
};
