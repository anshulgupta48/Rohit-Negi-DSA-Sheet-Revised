// ******** Koko loves to eat bananas. There are n piles of bananas, the ith pile has piles[i] bananas. The guards have gone and will come back in h hours. Koko can decide her bananas-per-hour eating speed of k. Each hour, she chooses some pile of bananas and eats k bananas from that pile. If the pile has less than k bananas, she eats all of them instead and will not eat any more bananas during this hour. Koko likes to eat slowly but still wants to finish eating all the bananas before the guards return. Return the minimum integer k such that she can eat all the bananas within h hours. ********

// <======== Example ========>
// Input: piles = [3,6,7,11], h = 8
// Output: 4

// Input: piles = [30,11,23,4,20], h = 5
// Output: 30

// Input: piles = [30,11,23,4,20], h = 6
// Output: 23


// Expected Time Complexity ==> O(n*logn)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int start = 1;
        int end = 10000000000;

        while(start <= end) {
            int mid = start + (end - start) / 2;
            int count = 0;

            for(int i = 0; i < n; i++) {
                count += (piles[i]+mid-1) / mid;
            }

            if(count > h) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }

        return start;
    }
};
