// ******** Given an array arr of non-negative numbers. The task is to find the first equilibrium point in an array. The equilibrium point in an array is an index (or position) such that the sum of all elements before that index is the same as the sum of elements after it. Return equilibrium point in 1-based indexing. Return -1 if no such point exists. ********

// <======== Example ========>
// Input: arr[] = [1, 3, 5, 2, 2]
// Output: 3

// Input: arr[] = [0, 1, 0]
// Output: 2

// Input: arr[] = [1, 2, 3]
// Output: -1


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution {
  public:
    int equilibriumPoint(vector<int> &arr) {
        int n = arr.size();
        int totalSum = 0;
        int sum = 0;
        
        for(int i = 0; i < n; i++) {
            totalSum += arr[i];
        }
        
        for(int i = 0; i < n; i++) {
            totalSum -= arr[i];
            if(sum == totalSum) {
                return i+1;
            }
            sum += arr[i];
        }
        
        return -1;
    }
};