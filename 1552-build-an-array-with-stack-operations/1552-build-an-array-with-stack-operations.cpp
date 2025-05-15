class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> arr;
        int stream = 1;
        for (int i = 0; i < target.size(); i++) {
            while (target[i] != stream) {
                arr.push_back("Push");
                arr.push_back("Pop");
                stream++;
            }
            arr.push_back("Push");
            stream++;
        }
        return arr;
    }
};