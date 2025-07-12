class Solution {
public:
    int hammingDistance(int x, int y) {
        int xorr = x ^ y;

        int cnt = 0;
        while(xorr != 0) {
            cnt += xorr & 1;
            xorr = xorr >> 1;
        }
        return cnt;
    }
};