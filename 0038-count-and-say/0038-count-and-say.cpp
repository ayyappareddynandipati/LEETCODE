class Solution {
public:
    string countAndSay(int n) {
        string val="1";
        for(int i=2;i<=n;i++){
            string s="";
            int cnt=1;
            for(int j=0;j<val.length();j++){
                if(j+1<val.length() && val[j]==val[j+1]){
                    cnt++;
                }else{
                    s+=to_string(cnt)+val[j];
                    cnt=1;
                }
            }
            val=s;
        }
        return val;
    }
};
