class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size(),posi=0,negi=1;
        vector<int> res(n);
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                res[posi]=nums[i];
                posi+=2;
            }
            else{
                res[negi]=nums[i];
                negi+=2;
            }
        }
        return res;
    }
};