// ******** Given an integer array arr[] of size n, where each element lies in the range [0, n-1], transform the array such that every element at index i becomes: arr[i]=arr[arr[i]]. The transformation must be performed in-place, meaning the same array should store both the original and updated values without using another array. ********

// <======== Example ========>
// Input: arr[] = [1, 0]
// Output: [0, 1]

// Input: arr[] = [4, 0, 2, 1, 3]
// Output: [3, 4, 2, 0, 1]


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    void arrange(vector<int>& arr) {
        int n = arr.size();
        
        for(int i = 0; i < n; i++) {
            arr[i] += (arr[arr[i]] % n) * n;
        }
        
        for(int i = 0; i < n; i++) {
            arr[i] = arr[i] / n;
        }
    }
};