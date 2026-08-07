// ******** Given an array arr[] containing distinct positive integers, and two integers start and end defining a range. Determine if the array contains all elements within inclusive range [start, end]. ********
// Note --> If the array contains all elements in the given range return true otherwise return false.

// <======== Example ========>
// Input: start = 2, end = 5, arr[] = [1, 4, 5, 2, 7, 8, 3]
// Output: true

// Input: start = 2, end = 6, arr[] = [1, 4, 5, 2, 7, 8, 3]
// Output: false


// Expected Time Complexity ==> O(n*logn)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    bool checkElements(int start, int end, vector<int> &arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        
        for(int i = 0; i < n; i++) {
            if(arr[i] == start) {
                start++;
            }
        }
        
        return (start > end);
    }
};