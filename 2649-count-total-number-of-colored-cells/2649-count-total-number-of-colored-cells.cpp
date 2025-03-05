class Solution {
public:
    long long coloredCells(int n) {
        if(n==1) return 1;
        return (long long)pow(n-1,2)+(long long)pow(n,2);
    }
};