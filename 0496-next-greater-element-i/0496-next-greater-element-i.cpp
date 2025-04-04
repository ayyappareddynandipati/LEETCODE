class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size(),n2=nums2.size();
        vector<int>res;
        stack<int>st;
        map<int,int>mpp;
        for(int i=n2-1;i>=0;i--){
            while(!st.empty() && st.top()<nums2[i]){
                st.pop();
            }
            mpp[nums2[i]] = st.empty() ? -1 : st.top();
            st.push(nums2[i]);
        }
        for(int i=0;i<n1;i++){
            res.push_back(mpp[nums1[i]]);
        }
        return res;
    }
};