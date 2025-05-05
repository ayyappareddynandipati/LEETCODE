class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int>st(students.begin(),students.end());
        stack<int>sw;
        for(int i=sandwiches.size()-1;i>=0;i--){
            sw.push(sandwiches[i]);
        }
        int cnt=0;
        while(cnt<st.size()){
            if(st.front()==sw.top()){
                st.pop();
                sw.pop();
                cnt=0;
            }else{
                st.push(st.front());
                st.pop();
                cnt++;
            }
        }
        return st.size();
    }
};
