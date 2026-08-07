// ******** Given a sorted array arr[] with possibly some duplicates, find the first and last occurrences of an element x in the given array. ********
// Note --> If the number x is not found in the array then return both the indices as -1.

// <======== Example ========>
// Input: arr[] = [1, 3, 5, 5, 5, 5, 67, 123, 125], x = 5
// Output: [2, 5]

// Input: arr[] = [1, 3, 5, 5, 5, 5, 7, 123, 125], x = 7
// Output: [6, 6]

// Input: arr[] = [1, 2, 3], x = 4
// Output: [-1, -1]


// Expected Time Complexity ==> O(logn)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    vector<int> find(vector<int>& arr, int x) {
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
        
        return {firstOccurrence, lastOccurrence};
    }
};