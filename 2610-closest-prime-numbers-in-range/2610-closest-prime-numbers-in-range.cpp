class Solution {
public:
    bool isPrime(int n){
        if(n<=1) return false;
        for(int i=2;i*i<=n;i++){
            if(n%i==0) return false;
        }
        return true;
    }
    vector<int> closestPrimes(int left, int right) {
        int mini=INT_MAX,num1=-1,num2=-1;
        vector<int>primes;
        for(int i=left;i<=right;i++){
            if(isPrime(i)){
                primes.push_back(i);
            }
        }
        for(int i=1;i<primes.size();i++){
            int dif=primes[i]-primes[i-1];
            if(dif<mini){
                mini=dif;
                num1=primes[i-1];
                num2=primes[i];
            }
        }
        return (num1 == -1 || num2 == -1) ? vector<int>{-1, -1} : vector<int>{num1, num2};

    }
};