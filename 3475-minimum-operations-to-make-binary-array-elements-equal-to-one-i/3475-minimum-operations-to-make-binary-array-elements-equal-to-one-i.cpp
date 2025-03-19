class Solution {
public:
    int minOperations(vector<int>& nums) {
        int cnt=0,n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                cnt++;
                if(i+1>=n || i+2>=n) return -1;
                nums[i+1]=1-nums[i+1];
                nums[i+2]=1-nums[i+2];
            }
        }
        return cnt;
    }
};