class Solution {
public:
    int noOfDays(vector<int>weights,int capability){
        int load=0,days=1;
        for(int i=0;i<weights.size();i++){
            if(load+weights[i]>capability){
                days++;
                load=weights[i];
            }else{
                load+=weights[i];
            }
        }
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        int high=accumulate(weights.begin(),weights.end(),0);
        while(low<high){
            int mid=low+(high-low)/2;
            int noofdays = noOfDays(weights,mid);
            if(noofdays<=days){
                high=mid;
            }else{
                low=mid+1;
            }
        }
        return low;
    }
};