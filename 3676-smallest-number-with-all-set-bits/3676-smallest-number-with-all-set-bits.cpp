class Solution {
public:
    int smallestNumber(int n) {
        int bits = (int)log2(n) + 1;
        return (1 << bits) - 1;
    }
};