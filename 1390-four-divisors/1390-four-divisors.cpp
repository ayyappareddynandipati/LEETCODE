class Solution {
public:
    int sumAll(int num){
        int cnt=0,sum=0;
        for(int i=2;i*i<=num;i++){
            if(num%i==0){
                int j=num/i;
                if(j == i || cnt > 0){
                    return 0;
                }
                sum += i + j;
                cnt++;
            }
        }
        if (cnt == 0) return 0;
        return 1 + sum + num;
    }
    int sumFourDivisors(vector<int>& nums) {
        int result=0;
        for(int a:nums){
            result+=sumAll(a);
        }
        return result;
    }
};