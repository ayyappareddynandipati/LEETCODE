class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        //if array has no duplicates and it is a permmutation
        int cnt=0,sum=0,presum=0;
        for(int i=0;i<arr.size();i++){
            presum+=arr[i];
            sum+=i;
            if(presum==sum) cnt++;
            // max_seen = max(max_seen,arr[i]);
            // if(max_seen==i) cnt++ another approach;
        }
        return cnt;
    }
};

//if array has duplicates and it is not a permmutation
// class Solution {
// public:
//     int maxChunksToSorted(vector<int>& arr) {
//         stack<int>st;
//         for(int i=1;i<arr.size();i++){
//             if(st.empty() || arr[i]>=st.top()){
//                 st.push(arr[i]);
//             }else{
//                 int maxval=st.top();
//                 while(!st.empty() && st.top()>arr[i]){
//                     st.pop();
//                 }
//                 st.push(maxval);
//             }
//         }
//         return st.size();
//     }
// };