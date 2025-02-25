#define MOD 1000000007
class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int n = arr.size();
        int oddCount = 0, evenCount = 1;
        int prefixSum = 0, result = 0;
        for (int i = 0; i < n; i++) {
            prefixSum += arr[i]; 
            if (prefixSum % 2 != 0) {
                result += evenCount;
                oddCount++;
            }
            else {
                result += oddCount;
                evenCount++;
            }
            
            result %= MOD;
        }
        return result;
    }
};
