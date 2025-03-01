class Solution {
public:
    int countArrays(vector<int>& original, vector<vector<int>>& bounds) {
        int n = original.size();
        vector<int> copyOfOrigin(n);
        for (int i = 0; i < n; i++) {
            copyOfOrigin[i] = original[i] - original[0];
        }
        int lower_bound = bounds[0][0] - copyOfOrigin[0];
        int upper_bound = bounds[0][1] - copyOfOrigin[0];

        for (int i = 1; i < n; i++) {
            lower_bound = max(lower_bound, bounds[i][0] - copyOfOrigin[i]);
            upper_bound = min(upper_bound, bounds[i][1] - copyOfOrigin[i]);

            if (lower_bound > upper_bound) return 0;
        }

        return max(0, upper_bound - lower_bound + 1);
    }
};