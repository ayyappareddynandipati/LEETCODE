class Solution {
public:
    int digit_sum(int num){
        int sum=0;
        while(num>0){
            sum+=(num%10);
            num/=10;
        }
        return sum;
    }
    int smallestIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(i==digit_sum(nums[i])) return i;
        }
        return -1;
    }
};