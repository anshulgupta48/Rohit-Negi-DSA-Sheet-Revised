// ******** Given an array arr[] of integers. Find the maximum sum of the smallest and second smallest elements across all subarrays (of size >= 2) of the given array. ********

// <======== Example ========>
// Input: arr[] = [4, 3, 5, 1]
// Output: 8

// Input: arr[] = [1, 2, 3]
// Output: 5


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution {
  public:
    int maxSum(vector<int> &arr) {
        int n = arr.size();
        int sum = 0;
        int maxSum = 0;
        
        for(int i = 0; i < n-1; i++) {
            sum = arr[i] + arr[i+1];
            maxSum = max(maxSum, sum);
        }
        
        return maxSum;
    }
};
