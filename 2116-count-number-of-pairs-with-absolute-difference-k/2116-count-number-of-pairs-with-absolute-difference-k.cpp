class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
      int cnt=0,i,j;
      for(i=0;i<nums.size();i++)
      {
          for(j=i+1;j<nums.size();j++)
          {
              if (abs(nums[i]-nums[j])==k)
              {
                  cnt++;
              }
          }
      }
      return cnt;
    }
};