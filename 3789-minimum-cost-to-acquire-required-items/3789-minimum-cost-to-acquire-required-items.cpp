class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        int rem1 = max (0, need1 - need2) ;
        int rem2 = max (0, need2 - need1) ;
        long long bothans = 1LL * min(need1,need2) * min(costBoth , cost1 + cost2) ;
        long long rem1ans = 1LL * min(costBoth,cost1) * rem1 ;
        long long rem2ans = 1LL * min(costBoth,cost2) * rem2 ;
        return bothans + rem1ans + rem2ans ;
    }
};