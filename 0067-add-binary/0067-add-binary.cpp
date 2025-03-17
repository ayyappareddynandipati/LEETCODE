class Solution {
public:
    string addBinary(string a, string b) {
        string res = "";
        int n = a.size()-1,m = b.size()-1,carry=0;
        while(n>=0 || m>=0 || carry){
            int digit1 = n>=0 ? a[n--] - '0' : 0;
            int digit2 = m>=0 ? b[m--] - '0' : 0;
            int sum = digit1+digit2+carry;
            res+=(sum%2)+'0';
            carry=sum/2;
        }
        reverse(res.begin(),res.end());
        return res;
    }
};