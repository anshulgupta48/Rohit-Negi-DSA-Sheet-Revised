// ******** Given a positive value n, find the count of numbers smaller than or equal to n such that the difference between the number and the sum of its digits is greater than or equal to a given value k. ********

// <======== Example ========>
// Input: n = 13, k = 2
// Output: 4

// Input: n = 10, k = 5
// Output: 1


// Expected Time Complexity ==> O(logn)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    int sumOfDigits(int num) {
        int sum = 0;
        
        while(num > 0) {
            int lastDigit = num % 10;
            sum += lastDigit;
            num = num / 10;
        }
        
        return sum;
    }
    
    int numberCount(int n, int k) {
        int start = 1;
        int end = n;
        int firstNum = n+1;
        
        while(start <= end) {
            int mid = start + (end - start) / 2;
            
            if(mid-sumOfDigits(mid) >= k) {
                firstNum = mid;
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        
        if(firstNum == n+1) {
            return 0;
        }
        return (n-firstNum+1);
    }
};