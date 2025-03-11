class Solution {
public:
    bool rotateString(string s, string goal) {
        return ((s + s).find(goal) != -1 && s.size()==goal.size());
    }
};