class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long sum=0;
        for(long long i=0;i<chalk.size();i++)
        {
            sum+=chalk[i];
        }  
        long long num=k%sum;
        cout<<num;
        int res;
        for(int j=0;j<chalk.size();j++)
        {
            if(num<chalk[j])
            {
                res=j;
                break;
            }
            num=num-chalk[j];
        }
        return res;
    }
};