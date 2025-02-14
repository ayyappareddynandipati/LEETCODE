class Solution {
public:
    bool isSumEqual(string fw, string sw, string tw) {
        int cnt1=0,cnt2=0,cnt3=0;
        for(char c : fw){
            cnt1=cnt1*10+c-97;
        }
        for(char c : sw){
            cnt2=cnt2*10+c-97;
        }
        for(char c : tw){
            cnt3=cnt3*10+c-97;
        }
        return cnt1+cnt2==cnt3;
    }
};