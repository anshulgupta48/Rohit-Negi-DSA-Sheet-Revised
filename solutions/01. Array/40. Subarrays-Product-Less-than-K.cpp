// ******** Given an array of positive numbers, the task is to find the number of possible contiguous subarrays having product less than a given number k. ********

// <======== Example ========>
// Input: n = 4, k = 10, a[] = [1, 2, 3, 4]
// Output: 7

// Input: n = 7 , k = 100, a[] = [1, 9, 2, 8, 6, 4, 3]
// Output: 16


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    long long countSubArrayProductLessThanK(const vector<int>& arr, int n, long long k) {
        long long count = 0;
        long long product = 1;
        int start = 0;
        int end = 0;
        
        if(k == 1) {
            return 0;
        }
        
        while(end < n) {
            product *= arr[end];
            while(product >= k) {
                product /= arr[start];
                start++;
            }
            
            count += (end-start+1);
            end++;
        }
        
        return count;
    }
};