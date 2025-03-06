class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        long long n = grid.size(),a=n*n;
        long long sn = (a*(a+1))/2;
        long long sn2 = (a*(a+1)*(2*a+1))/6;
        long long s=0,s2=0;
        for(int i=0;i<n;i++){
           for(int j=0;j<n;j++){
             s+=grid[i][j];
            s2+=((long long)grid[i][j]*(long long)grid[i][j]);
           }
        }
        long long val1 = s-sn;
        long long val2 = (s2-sn2)/val1;
        long long x = (val2+val1)/2;
        long long y = x-val1;
        return {(int)x,(int)y};
    }
};