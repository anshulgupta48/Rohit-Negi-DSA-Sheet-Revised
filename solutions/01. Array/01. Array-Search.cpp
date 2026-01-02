// ******** Given an array, arr[] of n integers, and an integer element x, find whether element x is present in the array. Return the index of the first occurrence of x in the array, or -1 if it doesn't exist. ********

// <======== Example ========>
// Input: arr[] = [1, 2, 3, 4], x = 3
// Output: 2

// Input: arr[] = [10, 8, 30, 4, 5], x = 5
// Output: 4

// Input: arr[] = [10, 8, 30], x = 6
// Output: -1


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    int search(vector<int>& arr, int x) {
        int n = arr.size();
        
        for(int i = 0; i < n; i++) {
            if(arr[i] == x) {
                return i;
            }
        }
        
        return -1;
    }
};