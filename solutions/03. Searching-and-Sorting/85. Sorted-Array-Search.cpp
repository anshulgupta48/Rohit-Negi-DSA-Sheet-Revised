// ******** Given an array, arr[] sorted in ascending order and an integer k. Return true if k is present in the array, otherwise false. ********

// <======== Example ========>
// Input: arr[] = [1, 2, 3, 4, 6], k = 6
// Output: true

// Input: arr[] = [1, 2, 4, 5, 6], k = 3
// Output: false

// Input: arr[] = [2, 3, 5, 6], k = 1
// Output: false


// Expected Time Complexity ==> O(logn)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    bool searchInSorted(vector<int>& arr, int k) {
        int n = arr.size();
        int start = 0;
        int end = n-1;
        
        while(start <= end) {
            int mid = start + (end - start) / 2;
            
            if(arr[mid] == k) {
                return true;
            }
            else if(arr[mid] < k) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
        
        return false;
    }
};