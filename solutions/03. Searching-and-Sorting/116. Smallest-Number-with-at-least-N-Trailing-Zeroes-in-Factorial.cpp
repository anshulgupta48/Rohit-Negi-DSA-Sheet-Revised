// ******** Given an integer n, find the smallest positive integer x such that the factorial of x (i.e.,  x! ) contains at least n trailing zeroes. ********

// <======== Example ========>
// Input: n = 6
// Output: 25

// Input: n = 1
// Output: 5


// Expected Time Complexity ==> O(logn)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    bool checkNum(int num, int n) {
        int count = 0;
        int start = 5;
        
        while(start <= num) {
            count += (num / start);
            start = 5 * start;
        }
        
        return (count >= n);
    }
    
    int findNum(int n) {
        int start = 0;
        int end = 5*n;
        
        if(n == 1) {
            return 5;
        }
        
        while(start < end) {
            int mid = start + (end - start) / 2;
            
            if(checkNum(mid, n)) {
                end = mid;
            } else {
                start = mid + 1;
            }
        }
        
        return start;
    }
};