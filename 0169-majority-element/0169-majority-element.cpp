class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size(),cnt=0,val;
        for(int i=0;i<n;i++){
            if(cnt==0){
                cnt=1;
                val=nums[i];
            }
            else if(val!=nums[i]){
                cnt--;
            }
            else{
                cnt++;
            }
        }
        int cnt1=0;
        for(int i=0;i<n;i++){
            if(val==nums[i]){
                cnt1++;
            }
            if(cnt1>n/2){
                return val;
            }
        }
        return 0;
    }
};