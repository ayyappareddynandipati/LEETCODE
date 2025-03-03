class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n=nums.size();
        vector<int>res(n,0);
        int left=0,right=n-1;
        for(int i=0,j=n-1;i<n,j>=0;i++,j--){
            if(nums[j]>pivot){
                res[right--]=nums[j];
            }
            if(nums[i]<pivot){
                res[left++]=nums[i];
            }
        }
        while(left<=right){
            res[left++]=pivot;
        }
        return res;
    }
};