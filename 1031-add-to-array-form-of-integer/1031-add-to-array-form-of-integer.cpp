class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int>res;
        int sum=k,n=num.size();
        for (int i = n - 1; i >= 0; --i) {
            sum += num[i];
            res.push_back(sum % 10);
            sum /= 10;
        }
        while(sum>0)
        {
            int rem=sum%10;
            res.push_back(rem);
            sum=sum/10;
        }
        reverse(res.begin(),res.end());
        return res;
    }
};