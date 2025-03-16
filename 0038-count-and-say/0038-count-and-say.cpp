class Solution {
public:
    string countAndSay(int n) {
        string val="1";
        for(int i=0;i<n-1;i++){
            char c = val[0];
            string s="";
            int cnt=1;
            for(int j=1;j<val.length();j++){
                if(c!=val[j]){
                    s+=to_string(cnt);
                    s+=c;
                    cnt=1;
                    c=val[j];
                }else{
                    cnt++;
                }
            }
            s+=to_string(cnt);
            s+=c;
            val=s;
        }
        return val;
    }
};