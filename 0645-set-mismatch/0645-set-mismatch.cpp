class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
    int n = nums.size();
    long long S = (long long)n * (n + 1) / 2;
    long long SS = (long long)n * (n + 1) * (2 * n + 1) / 6; 
    long long actualSum = 0, actualSumSquares = 0;
    for (int num : nums) {
        actualSum += (long long)num;
        actualSumSquares += (long long)num * num;
    }
    long long sumDiff = actualSum - S;  // x - y
    long long squareSumDiff = actualSumSquares - SS;  // x^2 - y^2
    long long sumXY = squareSumDiff / sumDiff;  // x + y
    int x = (sumDiff + sumXY) / 2;
    int y = sumXY - x;
    return {x, y};       
    }
};