class Solution {
public:
    const int mod = 1e9 + 7;
    
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        vector<int> prev(n), next(n);
        stack<int> st;
        
        // Previous Less Element
        for (int i = 0; i < n; ++i) {
            while (!st.empty() && arr[st.top()] >= arr[i]) {
                st.pop();
            }
            prev[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }

        // Clear stack for reuse
        while (!st.empty()) st.pop();

        // Next Less Element
        for (int i = n - 1; i >= 0; --i) {
            while (!st.empty() && arr[st.top()] > arr[i]) {
                st.pop();
            }
            next[i] = st.empty() ? n : st.top();
            st.push(i);
        }

        // Calculate total sum of minimums
        long long sum = 0;
        for (int i = 0; i < n; ++i) {
            long long left = i - prev[i];
            long long right = next[i] - i;
            sum = (sum + (arr[i] * left % mod) * right % mod) % mod;
        }

        return (int)sum;
    }
};
