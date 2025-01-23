#define mountain mt
class Solution {
public:
    vector<int> findPeaks(vector<int>& mountain) {
        int n = mt.size();
        vector<int> res;
        for(int i=1;i<n-1;i++)
        {
            if (mt[i]>mt[i-1] && mt[i]>mt[i+1])
            {
                res.push_back(i);
            }
        }
        return res; 
    }
};