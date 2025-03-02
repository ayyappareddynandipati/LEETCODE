class Solution {
public:
    int fun(char c1, char c2) {
        int diff = abs(c1 - c2);
        return min(diff, 26 - diff);
    }
    int longestPalindromicSubsequence(string s, int k) {
        int n = s.length();
    vector< vector< vector<int>>> dp(n,  vector< vector<int>>(n,  vector<int>(k + 1, 0)));

    for (int i = 0; i < n; ++i) {
        for (int x = 0; x <= k; ++x) {
            dp[i][i][x] = 1;
        }
    }

    for (int x = 2; x <= n; ++x) {
        for (int i = 0; i <= n - x; ++i) {
            int j = i + x - 1;
            for (int y = 0; y <= k; ++y) {
                if (s[i] == s[j]) {
                    dp[i][j][y] = 2 + dp[i + 1][j - 1][y];
                } else {
                    int opa = dp[i + 1][j][y];
                    int opb = dp[i][j - 1][y];
                    int c = fun(s[i], s[j]);
                    int opc = 0;
                    if (y >= c) {
                        opc = 2 + dp[i + 1][j - 1][y - c];
                    }
                    dp[i][j][y] =  max({opa, opb, opc});
                }
            }
        }
    }
    return dp[0][n - 1][k];
    }
};