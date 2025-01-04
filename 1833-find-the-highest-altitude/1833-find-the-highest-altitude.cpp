class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxi=0;
        int n = gain.size();
        vector<int> res(n+1,0);
        for(int i=1;i<n+1;i++)
        {
            res[i]=res[i-1]+gain[i-1];
            maxi=max(res[i],maxi);
        }
        return maxi;
    }
};