// ******** Given a positive integer n, find the square root of n. If n is not a perfect square, then return the floor value. Floor value of any number is the greatest Integer which is less than or equal to that number. ********

// <======== Example ========>
// Input: n = 4
// Output: 2

// Input: n = 11
// Output: 3

// Input: n = 1
// Output: 1


// Expected Time Complexity ==> O(logn)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    int floorSqrt(int n) {
        int start = 0;
        int end = n/2;
        
        if(n == 1) {
            return 1;
        }
        
        while(start <= end) {
            int mid = start + (end - start) / 2;
            
            if(mid*mid <= n && (mid+1)*(mid+1) > n) {
                return mid;
            }
            else if(mid*mid < n) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
        
        return -1;
    }
};