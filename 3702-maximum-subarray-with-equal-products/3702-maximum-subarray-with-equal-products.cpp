class Solution {
int lcm(int a,int b)
{
    return a*b/gcd(a,b);
}
int gcd(int a,int b)
{
    if (b==0) return a;
    return gcd(b,a%b);
}
public:
    int maxLength(vector<int>& nums) {
        int maxi=0;
        for(int i=0;i<nums.size();i++)
            {
                int gcdval=nums[i];
                int lcmval=nums[i];
                long long pro=nums[i];
                for(int j=i+1;j<nums.size();j++)
                    {
                        gcdval = gcd(gcdval,nums[j]);
                        lcmval = lcm(lcmval,nums[j]);
                        if (lcmval > 1e9) break;
                        pro *= nums[j];
                        if (pro > 1e9) break;
                        if(pro==1LL*lcmval*gcdval)
                        {
                            maxi=max(maxi,j-i+1);
                        }
                    }
            }
        return maxi;
    }
};