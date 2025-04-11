class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int cnt=0;
        for (int i = max(low, 11); i <= min(high, 99); i++) {
            if(i%11==0) cnt++; // all 2-digit symmetric numbers
        }
        for (int i = max(low, 1001); i <= min(high, 9999); i++) {
            int a = i / 1000;
            int b = (i / 100) % 10;
            int c = (i / 10) % 10;
            int d = i % 10;
            if (a + b == c + d) cnt++;
        }
        return cnt;
    }
};