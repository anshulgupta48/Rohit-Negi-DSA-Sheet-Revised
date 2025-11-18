// ******** Given an unsorted array arr[] of numbers, sort the array in ascending order. ********

// <======== Example ========>
// Input: arr[] = [1, 5, 3, 2]
// Output: [1, 2, 3, 5]

// Input: arr[] = [3, 1]
// Output: [1, 3]

// Input: arr[] = [1, 2, 3]
// Output: [1, 2, 3]


// Expected Time Complexity ==> O(n*logn)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    void sortArr(vector<int> &arr) {
        sort(arr.begin(), arr.end());
    }
};