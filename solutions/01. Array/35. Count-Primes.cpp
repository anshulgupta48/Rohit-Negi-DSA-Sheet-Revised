// ******** Given an integer n, return the number of prime numbers that are strictly less than n. ********

// <======== Example ========>
// Input: n = 10
// Output: 4

// Input: n = 0
// Output: 0

// Input: n = 1
// Output: 0


// Expected Time Complexity ==> O(n*logn)
// Expected Auxiliary Space ==> O(n)




class Solution{
    public:
    int countPrimes(int n) {
        int count = 0;
        vector<bool> isPrime(n, true);

        for(int i = 2; i < n; i++) {
            if(isPrime[i]) {
                count++;

                for(int j = 2*i; j < n; j += i) {
                    isPrime[j] = false;
                }
            }
        }

        return count;
    }
};