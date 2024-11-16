class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int len = temperatures.size();
        vector<int> result(len, 0);
        stack<int> st; // Stack to store the indices of temperatures
        for (int i = 0; i < len; ++i) {
            // While stack is not empty and the current temperature is greater than the temperature at the index stored at the top of the stack
            while (!st.empty() && temperatures[i] > temperatures[st.top()]) {
                int index = st.top();
                st.pop();
                result[index] = i - index; // Calculate the days difference
                }
            st.push(i); // Push the current index onto the stack
            }
            return result;
    }
};