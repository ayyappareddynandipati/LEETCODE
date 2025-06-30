class Solution {
public:
    bool KSetBits(int n,int k){
        int cnt=0;
        while(n>0){
            if(n%2==1) cnt++;
            n/=2;
            if(cnt > k) return false;
        }
        return cnt==k;
    }
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            if(KSetBits(i,k)) sum+=nums[i];
        }
        return sum;
    }
};