class Solution {
public:
    bool checkPerfectNumber(int num) {
        int pos_div_sum=0;
        for(int i=1;i<=num/2;i++)
        {
            if(num%i==0)
            {
                pos_div_sum+=i;
            }
            else if (pos_div_sum>num)
            {
                return false;
            }
        }
        return pos_div_sum==num;
    }
};