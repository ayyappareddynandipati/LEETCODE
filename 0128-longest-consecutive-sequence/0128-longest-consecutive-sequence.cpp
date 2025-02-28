class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size(),longest=0;
        unordered_set<int> st;
        for(int n : nums){
            st.insert(n);
        }
        for(auto it : st){
            if(st.find(it-1)==st.end()){
                int cnt=1;
                int x = it;
                while(st.find(x+1)!=st.end()){
                    x++;
                    cnt++;
                }
                longest=max(cnt,longest);
            }
        }
        return longest;
    }
};