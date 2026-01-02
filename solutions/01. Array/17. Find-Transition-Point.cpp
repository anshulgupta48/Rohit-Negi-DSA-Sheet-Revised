// ******** Given a sorted array, arr[] containing only 0s and 1s, find the transition point, i.e., the first index where 1 was observed, and before that, only 0 was observed. If arr does not have any 1, return -1. If array does not have any 0, return 0. ********

// <======== Example ========>
// Input: arr[] = [0, 0, 0, 1, 1]
// Output: 3

// Input: arr[] = [0, 0, 0, 0]
// Output: -1

// Input: arr[] = [1, 1, 1]
// Output: 0

// Input: arr[] = [0, 1, 1]
// Output: 1


// Expected Time Complexity ==> O(logn)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    int transitionPoint(vector<int>& arr) {
        int n = arr.size();
        int start = 0;
        int end = n-1;
        
        while(start <= end) {
            int mid = start + (end - start) / 2;
            
            if(arr[mid] == 0) {
                start = mid + 1;
            } else {
                if(mid == 0 || arr[mid-1] == 0) {
                    return mid;
                } else {
                    end = mid - 1;
                }
            }
        }
        
        return -1;
    }
};