// ******** Given an array arr of only 0's and 1's. The array is sorted in such a manner that all the 1's are placed first and then they are followed by all the 0's. Find the count of all the 0's. ********

// <======== Example ========>
// Input: arr[] = [1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0]
// Output: 3

// Input: arr[] = [0, 0, 0, 0, 0]
// Output: 5


// Expected Time Complexity ==> O(logn)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    int countZeroes(vector<int> &arr) {
        int n = arr.size();
        int start = 0;
        int end = n-1;
        
        while(start <= end) {
            int mid = start + (end - start) / 2;
            
            if(arr[mid] == 1) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        
        return (n-start);
    }
};