class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> res(rowIndex+1,1);
        long long int ans=1;
        for(int i=1;i<rowIndex;i++)
        {
            ans=ans*(rowIndex+1-i)/i;
            res[i]=ans;
        }
        return res;
    }
};