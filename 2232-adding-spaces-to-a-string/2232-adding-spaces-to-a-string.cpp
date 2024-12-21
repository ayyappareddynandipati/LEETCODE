class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int n = s.size(),m = spaces.size();
        string res="";
        int i=0,j=0,k=0;
        while(k<(n+m) && i<n && j<m)
        {
            if (k==(spaces[j]+j))
            {
                res+=" ";
                j++;
            }
            else
            {
                res+=s[i];
                i++;
            }
            k++;
        }
        while(i<n)
        {
            res+=s[i];
            i++;
        }
        return res;
    }
};