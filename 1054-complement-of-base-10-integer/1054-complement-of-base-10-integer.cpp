class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0) return 1;
        vector<int>res;
        while(n>0)
        {
            int rem=n%2;
            if (rem==1) res.push_back(0);
            else if (rem==0) res.push_back(1);
            n=n/2;
        }  
        int sum=0;n=res.size();
        for(int i=n-1;i>=0;i--)
        {
            sum=sum*2+res[i];
        }
        return sum;
    }
};