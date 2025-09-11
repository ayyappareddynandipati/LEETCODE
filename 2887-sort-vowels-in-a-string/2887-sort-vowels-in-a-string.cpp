class Solution {
public:
    bool isVowel(char ch){
        static const string vowels = "aeiouAEIOU";
        return vowels.find(ch) != string::npos;
    }
    string sortVowels(string s) {
        vector<char>vowels;
        for(int i=0;i<s.size();i++){
            if(isVowel(s[i]))
                vowels.push_back(s[i]);
        }
        sort(vowels.begin(),vowels.end());
        int j=0;
        for(int i=0;i<s.size();i++){
            if(isVowel(s[i])){
                s[i]=vowels[j];
                j++;
            }
        }
        return s;
    }
};