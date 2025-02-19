class Solution {
public:
    bool isBalanced(string num) {
        int evensum=0,oddsum=0;
        for(int i=0;i<num.size();i++){
            i%2==0 ? evensum+=(num[i]-'0'):oddsum+=(num[i]-'0');
        }
        return evensum==oddsum;
    }
};