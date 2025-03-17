class Solution {
public:
    string addStrings(string num1, string num2) {
        int n = num1.size()-1,m=num2.size()-1;
        int carry=0,res=0;
        string ans = "";

        while(n>=0 || m>=0){
            int dig1 = n>=0 ? num1[n]-'0' : 0;
            int dig2 = m>=0 ? num2[m]-'0' : 0;
            res=dig1+dig2+carry;
            carry = res/10;
            res%=10;
            ans += to_string(res);
            n--,m--;
        }
        if(carry==1) ans+='1';
        reverse(ans.begin(), ans.end());
        return ans;
    }
};