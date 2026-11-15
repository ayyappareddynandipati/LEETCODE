class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0,write = 0;
        while(i < chars.size()){
            char curr = chars[i];
            int cnt=0;
            while(i < chars.size() && chars[i] == curr){
                i++;
                cnt++;
            }
            chars[write++] = curr;
            if(cnt > 1){
                for(char c : to_string(cnt)){
                    chars[write++] = c;
                }
            }
        }
        return write;
    }
};