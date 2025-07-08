class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        int freq[51] = {0};
        for(int num : nums) freq[num]++;
        int res=0;
        for(int i=0;i<51;i++){
            if(freq[i]==2){
                res^=i;
            }
        }
        return res;

    }
};