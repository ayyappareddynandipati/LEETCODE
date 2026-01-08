class Solution {
public:
    vector<int> twoDivisors(int n){
        int a=sqrt(n);
        while(n%a!=0){
            a--;
        }
        return {a,n/a};
    }
    vector<int> closestDivisors(int num) {
        vector<int> num1 = twoDivisors(num+1);
        vector<int> num2 = twoDivisors(num+2);
        return abs(num1[0]-num1[1]) < abs(num2[0]-num2[1]) ? num1 : num2;
    }
};