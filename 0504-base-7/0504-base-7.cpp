class Solution {
public:
    string convertToBase7(int num) {
        if (num == 0) return "0"; 

        bool isNegative = num < 0;
        num = abs(num);
        string res = "";

        while (num > 0) {
            char c = (num % 7) + '0';
            res += c;
            num /= 7;
        }

        if (isNegative) res += '-';

        reverse(res.begin(), res.end());
        return res;
    }
};