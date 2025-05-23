class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if (intervals.empty()) return {};

        // Sort the intervals by the start time
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> res;
        res.push_back(intervals[0]);

        for (int i = 1; i < intervals.size(); i++) {
            if (intervals[i][0] <= res.back()[1]) {
                // Merge the intervals
                res.back()[1] = max(res.back()[1], intervals[i][1]);
            } else {
                // No overlap, push the interval
                res.push_back(intervals[i]);
            }
        }

        return res;

    }
};