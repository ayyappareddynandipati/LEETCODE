class Solution {
public:
    int countSegments(string s) {
        int cnt=0,n=s.size();
        bool inword = false;
        for(char c : s)
        {
            if (c != ' ')
                {
                    if (!inword)
                    {
                        inword = true;
                        cnt++;
                    }
                }
            else
                {
                    inword = false;
                }
        }
        return cnt;
    }
};