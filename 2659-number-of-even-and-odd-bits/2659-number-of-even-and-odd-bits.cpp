class Solution {
public:
    vector<int> evenOddBit(int n) {
        int ocnt=0,ecnt=0,ind=0;
        while(n>0){
            if(n&1){
                if(ind%2){
                    ocnt++;
                }else{
                    ecnt++;
                }
            }
            n>>=1;
            ind++;
        }
        return {ecnt,ocnt};
    }
};