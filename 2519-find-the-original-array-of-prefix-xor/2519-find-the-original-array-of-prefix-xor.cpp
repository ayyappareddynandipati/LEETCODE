class Solution {
public:
    vector<int> findArray(vector<int> arr) {
        vector<int> res(arr.size(),0);
        res[0]=arr[0];
        for(int i=1;i<arr.size();i++)
        {
            res[i]=arr[i]^arr[i-1];
        }
        return res;
    }
};