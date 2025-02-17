class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string> res;
        char a = s[0],b=s[3],c=s[1],d=s[4];
        int a1 = a-'0',b1=b-'0',c1=c-'0',d1=d-'0';
        for(int i=a1;i<=b1;i++)
        {
            for(int j=c1;j<=d1;j++)
            {
                string s1="";
                char a2 = '0' + i,b2 = '0' + j;
                s1+=a2;
                s1+=b2;
                res.push_back(s1);
            }
        }
        return res;
    }
};