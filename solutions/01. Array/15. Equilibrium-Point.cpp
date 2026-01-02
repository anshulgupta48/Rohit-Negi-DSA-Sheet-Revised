// ******** Given an array of integers arr[], the task is to find the first equilibrium point in the array. The equilibrium point in an array is an index (0-based indexing) such that the sum of all elements before that index is the same as the sum of elements after it. Return -1 if no such point exists. ********

// <======== Example ========>
// Input: arr[] = [1, 2, 0, 3]
// Output: 2

// Input: arr[] = [1, 1, 1, 1]
// Output: -1

// Input: arr[] = [-7, 1, 5, 2, -4, 3, 0]
// Output: 3


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    int findEquilibrium(vector<int> &arr) {
        int n = arr.size();
        int totalSum = 0;
        int sum = 0;
        
        for(int i = 0; i < n; i++) {
            totalSum += arr[i];
        }
        
        for(int i = 0; i < n; i++) {
            totalSum -= arr[i];
            if(sum == totalSum) {
                return i;
            }
            sum += arr[i];
        }
        
        return -1;
    }
};