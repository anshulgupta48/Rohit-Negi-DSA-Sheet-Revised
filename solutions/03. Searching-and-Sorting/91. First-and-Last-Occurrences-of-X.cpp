// ******** Given an element x and a sorted array, arr[], find the indices of first and last occurrences of the x's in the array. ********
// Note --> If the number x is not found in the array, return an array containing -1 only.

// <======== Example ========>
// Input: x = 3, arr[] = [1, 3, 3, 4]
// Output: [1, 2]

// Input: x = 5, arr[] = [1, 2, 3, 4]
// Output: [-1]


// Expected Time Complexity ==> O(logn)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    vector<int> firstAndLast(int x, vector<int> &arr) {
        int n = arr.size();
        int firstOccurrence = -1;
        int lastOccurrence = -1;
        int start = 0;
        int end = n-1;
        
        while(start <= end) {
            int mid = start + (end - start) / 2;
            
            if(arr[mid] == x) {
                firstOccurrence = mid;
                end = mid - 1;
            }
            else if(arr[mid] < x) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
        
        start = 0;
        end = n-1;
        while(start <= end) {
            int mid = start + (end - start) / 2;
            
            if(arr[mid] == x) {
                lastOccurrence = mid;
                start = mid + 1;
            }
            else if(arr[mid] < x) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
        
        if(firstOccurrence == -1 || lastOccurrence == -1) {
            return {-1};
        }
        return {firstOccurrence, lastOccurrence};
    }
};