// ******** Given an array of integers arr[] that is first strictly increasing and then maybe strictly decreasing, find the bitonic point, that is the maximum element in the array. Bitonic Point is a point before which elements are strictly increasing and after which elements are strictly decreasing. ********
// Note --> It is guaranteed that the array contains exactly one bitonic point.

// <======== Example ========>
// Input: arr[] = [1, 2, 4, 5, 7, 8, 3]
// Output: 8

// Input: arr[] = [10, 20, 30, 40, 50]
// Output: 50

// Input: arr[] = [120, 100, 80, 20, 0]
// Output: 120


// Expected Time Complexity ==> O(logn)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    int findMaximum(vector<int> &arr) {
        int n = arr.size();
        int start = 0;
        int end = n-1;
        
        while(start < end) {
            int mid = start + (end - start) / 2;
            
            if(arr[mid] < arr[mid+1]) {
                start = mid + 1;
            } else {
                end = mid;
            }
        }
        
        return arr[start];
    }
};