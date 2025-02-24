class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int cnt=0,j=0;
        for(int i=1;i<nums.size();i++){
            if(nums[j]!=nums[i]){
                cnt++;
                j++;
                nums[j]=nums[i];
            }
        }
        return cnt+1;
    }
};