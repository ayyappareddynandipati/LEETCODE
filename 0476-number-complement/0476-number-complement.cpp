class Solution {
public:
    int findComplement(int num) {
        vector<int>res;
        while(num>0)
        {
            int rem=num%2;
            if (rem==1) res.push_back(0);
            else if (rem==0) res.push_back(1);
            num=num/2;
        }
        int sum=0,n=res.size();
        for(int i=n-1;i>=0;i--)
        {

            sum=sum*2+res[i];
        }
        return sum;
    }
};