// ******** You are given a circular array arr[] of integers, find the maximum possible sum of a non-empty subarray. In a circular array, the subarray can start at the end and wrap around to the beginning. Return the maximum non-empty subarray sum, considering both non-wrapping and wrapping cases. ********

// <======== Example ========>
// Input: arr[] = [8, -8, 9, -9, 10, -11, 12]
// Output: 22

// Input: arr[] = [10, -3, -4, 7, 6, 5, -4, -1]
// Output: 23

// Input: arr[] = [5, -2, 3, 4]
// Output: 12


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    int kadaneAlgorithm(vector<int> arr) {
        int n = arr.size();
        int sum = 0;
        int maxSum = INT_MIN;
        
        for(int i = 0; i < n; i++) {
            if(sum < 0) {
                sum = 0;
            }
            sum += arr[i];
            maxSum = max(maxSum, sum);
        }
        
        return maxSum;
    }
    
    int maxCircularSum(vector<int> &arr) {
        int n = arr.size();
        int k1 = kadaneAlgorithm(arr);
        int k2 = 0;
        
        if(k1 < 0) {
            return k1;
        }
        
        for(int i = 0; i < n; i++) {
            k2 += arr[i];
            arr[i] = arr[i] * (-1);
        }
        
        k2 += kadaneAlgorithm(arr);
        return max(k1, k2);
    }
};