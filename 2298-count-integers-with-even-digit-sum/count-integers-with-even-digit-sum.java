class Solution {
    public int countEven(int num) {
        int cnt=0,sum;
        for(int i=1;i<=num;i++)
        {
            sum=0;
            int j=i;
            while(j>0)
            {
                sum+=j%10;
                j/=10;
            }
            if(sum%2==0) 
            {
                cnt++;
            }
        }
        return cnt;
    }
}