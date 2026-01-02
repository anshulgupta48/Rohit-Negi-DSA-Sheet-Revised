// ******** Given a sorted array arr[] that represents an Arithmetic Progression (AP) with exactly one missing element, find the missing number. The array arr[] is sorted in either ascending or descending order. ********
// Note --> An element will always exist that, upon inserting into a sequence forms Arithmetic progression. If the given sequence already forms a valid complete AP, return the (n+1)-th element that would come next in the sequence.

// <======== Example ========>
// Input: arr[] = [2, 4, 8, 10, 12, 14]
// Output: 6

// Input: arr[] = [1, 6, 11, 16, 21, 31]
// Output: 26

// Input: arr[] = [4, 7, 10, 13, 16]
// Output: 19


// Expected Time Complexity ==> O(logn)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    int findMissing(vector<int> &arr) {
        int n = arr.size();
        int start = 0;
        int end = n-1;
        
        int diff;
        int diff1 = arr[1] - arr[0];
        int diff2 = arr[n-1] - arr[n-2];
        int diff3 = (arr[n-1] - arr[0]) / n;
        
        if(diff1 == diff2) {
            diff = diff1;
        }
        else if(diff1 == diff3) {
            diff = diff1;
        }
        else {
            diff = diff2;
        }
        
        while(start <= end) {
            int mid = start + (end - start) / 2;
            int expectedValue = arr[0] + mid*diff;
            
            if(arr[mid] == expectedValue) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        
        int ans = arr[end] + diff;
        return ans;
    }
};