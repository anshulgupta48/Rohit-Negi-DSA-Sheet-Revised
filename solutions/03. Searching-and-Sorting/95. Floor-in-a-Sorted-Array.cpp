// ******** Given a sorted array arr[] and an integer x, find the index (0-based) of the largest element in arr[] that is less than or equal to x. This element is called the floor of x. If such an element does not exist, return -1. ********
// Note --> In case of multiple occurrences of floor of x, return the index of the last occurrence.

// <======== Example ========>
// Input: arr[] = [1, 2, 8, 10, 10, 12, 19], x = 5
// Output: 1

// Input: arr[] = [1, 2, 8, 10, 10, 12, 19], x = 11
// Output: 4

// Input: arr[] = [1, 2, 8, 10, 10, 12, 19], x = 0
// Output: -1


// Expected Time Complexity ==> O(logn)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    int findFloor(vector<int>& arr, int x) {
        int n = arr.size();
        int ans = -1;
        int start = 0;
        int end = n-1;
        
        while(start <= end) {
            int mid = start + (end - start) / 2;
            
            if(arr[mid] <= x) {
                ans = mid;
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        
        return ans;
    }
};