class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        vector<int> remainder_count(k,0);
        for(int i=0;i<arr.size();i++)
        {
            int remainder = arr[i] % k;
            if (remainder < 0)
            {
                remainder+=k;
            }
            remainder_count[remainder]++;
        }
        for(int i=0;i<k;i++)
        {
            if (i==0)
            {
                if (remainder_count[i] % 2 != 0)
                {
                    return false;
                }
            }
            else
            {
                if (remainder_count[i] != remainder_count[k-i])
                {
                    return false;
                }
            }
        }
        return true;
    }
};