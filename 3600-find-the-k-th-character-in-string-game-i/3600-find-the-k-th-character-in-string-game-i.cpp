class Solution {
public:
    char kthCharacter(int k) {
        string res="a";
        while(res.size() < k){
            int size = res.size();
            for(int i=0;i<size;i++){
                char nextchar = 'a' + (res[i] - 'a' + 1) % 26;
                res+=nextchar;
            }
        }
        return res[k-1];
    }
};