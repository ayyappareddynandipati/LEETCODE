class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        int n = encoded.size();
        vector<int> res(n+1,first);
        for(int i=1;i<n+1;i++)
        {
            res[i]=res[i-1]^encoded[i-1];
        }
        return res;
    }
};