// ******** You are given an array arr[] where no two adjacent elements are same, find the index of a peak element. An element is considered to be a peak if it is greater than its adjacent elements (if they exist). If there are multiple peak elements, Return index of any one of them. The output will be "true" if the index returned by your function is correct otherwise, it will be "false". ********
// Note --> Consider the element before the first element and the element after the last element to be negative infinity.

// <======== Example ========>
// Input: arr = [1, 2, 4, 5, 7, 8, 3]
// Output: true

// Input: arr = [10, 20, 15, 2, 23, 90, 80]
// Output: true


// Expected Time Complexity ==> O(logn)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    int peakElement(vector<int> &arr) {
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
        
        return start;
    }
};