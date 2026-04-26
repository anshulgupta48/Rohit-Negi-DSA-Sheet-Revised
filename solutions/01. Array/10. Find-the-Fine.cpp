// ******** Given an array of car numbers car[], an array of penalties fine[], and an integer date, determine the total fine collected on that date. The fine is collected based on parity, i.e., on an even date, fines are collected from odd-numbered cars, and on an odd date, fines are collected from even-numbered cars. ********

// <======== Example ========>
// Input: date = 12, car[] = [2375, 7682, 2325, 2352], fine[] = [250, 500, 350, 200]
// Output: 600

// Input: date = 8, car[] = [2222, 2223, 2224], fine[] = [200, 300, 400]
// Output: 300


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    long long int totalFine(int date, vector<int> &car, vector<int> &fine) {
        int n = car.size();
        long long int ans = 0;
        
        for(int i = 0; i < n; i++) {
            if(date%2 == 0 && car[i]%2 != 0) {
                ans += fine[i];
            }
            else if(date%2 != 0 && car[i]%2 == 0) {
                ans += fine[i];
            }
        }
        
        return ans;
    }
};