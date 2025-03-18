class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int>res;
        int carry = 1,n=digits.size()-1;
        for(int i=n;i>=0;i--){
            int num = digits[i]+carry;
            if(num>9){
                res.push_back(num%10);
                carry=num/10;
            }else{
                res.push_back(num);
                carry=0;
            }
        }
        if(carry == 1) res.push_back(1);
        reverse(res.begin(),res.end());
        return res;
    }
};