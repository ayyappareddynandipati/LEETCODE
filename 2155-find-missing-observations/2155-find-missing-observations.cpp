class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
    long long sum=0;
    for(long long i=0;i<rolls.size();i++)
    {
        sum+=rolls[i];
    }
    long long num = ((rolls.size()+n)*mean)-sum;
    if (num>n*6 || num<n) return {};
    vector<int>res(n,num/n);
    int remainder=num%n;
    for(int i=0;i<remainder;i++)
    {
        res[i]++;
    }
    return res;
    }
};