class Solution {
public:
    string smallestNumber(string pattern) {
        stack<int>st;
        string res="";
        int num=1;
        for(int i=0;i<=pattern.size();i++){
            st.push(num++);
                if(i==pattern.size() || pattern[i]=='I'){
                    while(!st.empty()){
                        int a = st.top();
                        res+=to_string(a);
                        st.pop();

                    }
                }
        }
        return res;
    }
};