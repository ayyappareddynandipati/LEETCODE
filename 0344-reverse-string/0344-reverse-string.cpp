class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size(),i=0,j=n-1;
        while(i<n/2 && j>=n/2){
            swap(s[i],s[j]);
            i++,j--;
        }
    }
};