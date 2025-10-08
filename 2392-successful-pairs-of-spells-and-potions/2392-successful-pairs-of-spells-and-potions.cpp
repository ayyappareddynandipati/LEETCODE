class Solution {
public:
    int binarySearch(int spell, vector<int>& potions, long long success){
        int low = 0 , high = potions.size()-1;
        int index = potions.size();
        while(low <= high){
            int mid = low + (high-low)/2;
            if((long long)spell * potions[mid] >= success){
                index = mid;
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return potions.size() - index;
    }
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(),potions.end());
        int n = spells.size() , m = potions.size();
        vector<int>res(n,0);
        for(int i=0;i<n;i++){
            res[i] = binarySearch(spells[i],potions,success);
        }
        return res;
    }
};