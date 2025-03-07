class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size(),n2=nums2.size();
        int i=0,j=0;
        int n =(n1+n2);
        int ind2=n/2,ind1=ind2-1;
        int cnt=0;
        int val1=-1,val2=-1;
        while(i<n1 && j<n2){
            if(nums1[i]<nums2[j]){
                if(cnt==ind1) val1=nums1[i];
                if(cnt==ind2) val2=nums1[i];
                cnt++,i++;
            }
            else{
                if(cnt==ind1) val1=nums2[j];
                if(cnt==ind2) val2=nums2[j];
                cnt++;
                j++;
            }
        }
        while(i<n1){
            if(cnt==ind1) val1=nums1[i];
            if(cnt==ind2) val2=nums1[i];
            cnt++,i++;
        }
        while(j<n2){
            if(cnt==ind1) val1=nums2[j];
            if(cnt==ind2) val2=nums2[j];
            cnt++,j++;
        }
        if(n%2==1){
            return val2;
        }
        return (double)(val1+val2)/2.0;
    }
};