class Solution {
public:
    string generateTheString(int n) {
        string res(n-1,'a');
        return n%2==0 ? res+='b' : res+='a';
    }
};