class Solution {
public:
    int primeCount(int limit){
        int cnt=0;
        vector<bool> is_prime(limit,true);
        is_prime[0]=is_prime[1]=false;
        for(int i=2;i*i<limit;i++){
            if(is_prime[i]){
                for(int j=i*i;j<limit;j+=i){
                    is_prime[j]=false;
                }
            }
        }
        for(int i=2;i<limit;i++){
            if(is_prime[i]){
                cnt++;
            }
        }
        return cnt;
    }
    int countPrimes(int n) {
        if(n<=1) return 0;
        return primeCount(n);
    }
};