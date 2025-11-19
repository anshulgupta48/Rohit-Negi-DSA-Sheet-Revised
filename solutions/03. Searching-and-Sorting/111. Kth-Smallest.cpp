// ******** Given an integer array arr[] and an integer k, your task is to find and return the kth smallest element in the given array. ********

// <======== Example ========>
// Input: arr[] = [10, 5, 4, 3, 48, 6, 2, 33, 53, 10], k = 4
// Output: 5

// Input: arr[] = [7, 10, 4, 3, 20, 15], k = 3
// Output: 7


// Expected Time Complexity ==> O(n*logn)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    int kthSmallest(vector<int> &arr, int k) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        return arr[k-1];
    }
};