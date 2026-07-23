// ******** Given an integer array arr[] of positive numbers, the task is to find the number of possible contiguous subarrays having product less than k. ********

// <======== Example ========>
// Input: k = 10, arr[] = [1, 2, 3, 4]
// Output: 7

// Input: k = 100, arr[] = [1, 9, 2, 8, 6, 4, 3]
// Output: 16


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    int countSubarray(vector<int>& arr, int k) {
        int n = arr.size();
        int product = 1;
        int count = 0;
        int start = 0;
        int end = 0;
        
        if(k <= 1) {
            return 0;
        }
        
        while(end < n) {
            product = product * arr[end];
            while(product >= k) {
                product = product / arr[start];
                start++;
            }
            
            count += (end-start+1);
            end++;
        }
        
        return count;
    }
};