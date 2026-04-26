class Solution {
public:
    int secondHighest(string s) {
        int largest=-1,secondlargest=-1;
        for(char c : s){
            if(isdigit(c)){
                int num = c - '0';
                if(num > largest){
                    secondlargest=largest;
                    largest=num;
                }else if (num < largest && num > secondlargest){
                    secondlargest=num;
                }
            }
        }
        return secondlargest;
    }
};