class Solution {
public:
    // Function to check if a number is prime
    bool isPrime(int n) {
        if (n <= 1) return false;
        if (n <= 3) return true;
        if (n % 2 == 0 || n % 3 == 0) return false;
        for (int i = 5; i * i <= n; i += 6) {
            if (n % i == 0 || n % (i + 2) == 0) return false;
        }
        return true;
    }

    vector<int> closestPrimes(int left, int right) {
        vector<int> primes;
        for (int i = left; i <= right; i++) {
            if (isPrime(i)) {
                primes.push_back(i);
            }
        }

        if (primes.size() < 2) return {-1, -1};

        int minDiff = INT_MAX;
        vector<int> result;
        for (int i = 1; i < primes.size(); i++) {
            int diff = primes[i] - primes[i - 1];
            if (diff < minDiff) {
                minDiff = diff;
                result = {primes[i - 1], primes[i]};
            }
        }

        return result;
    }
};
