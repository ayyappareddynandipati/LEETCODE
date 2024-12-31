class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        set<int> set1(nums1.begin(),nums1.end());
        set<int> set2(nums2.begin(),nums2.end());
        int cnt1=0,cnt2=0;
        for(int num1 : nums1)
        {
            if(set2.count(num1))
            {
                cnt1++;
            }
        }
        for( int num2 : nums2)
        {
            if (set1.count(num2))
            {
                cnt2++;
            }
        }
        return {cnt1,cnt2};
    }
};