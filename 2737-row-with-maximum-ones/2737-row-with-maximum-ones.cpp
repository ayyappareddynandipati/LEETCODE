class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        vector<int>res(2,0);
        int n = mat.size(),m=mat[0].size();
        int maxones=0;
        for(int i=0;i<n;i++){
            int cnt=count(mat[i].begin(),mat[i].end(),1);
            if(cnt>maxones){
                maxones=cnt;
                res[0]=i;
                res[1]=maxones;
            }
        }
        return res;
    }
};