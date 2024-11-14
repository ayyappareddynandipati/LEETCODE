class Solution {
public:
bool isvowel(char i){
        if(i == 'a' || i == 'e'|| i == 'i' || i == 'o' || i == 'u'|| i == 'A'|| i == 'E' || i == 'I' || i == 'O' || i == 'U'){
            return true;
        }
        return false;
    }
    string reverseVowels(string s) {
        int i=0;
        int j= s.size() - 1;
        while(i<j){
            while(i<j && !isvowel(s[i])){
                i++;
            } 
            while(i<j && !isvowel(s[j])){
                j--;
            }
            if(i<j){
                swap(s[i], s[j]);
                i++;
                j--;
            }
        }    
        return s;
    }
};