// ******** Given an array arr[] containing only 0s, 1s, and 2s. Sort the array in ascending order. ********
// Note --> You need to solve this problem without utilizing the built-in sort function.

// <======== Example ========>
// Input: arr[] = [0, 1, 2, 0, 1, 2]
// Output: [0, 0, 1, 1, 2, 2]

// Input: arr[] = [0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1]
// Output: [0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2]


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    void sort012(vector<int>& arr) {
        int n = arr.size();
        int start = 0;
        int mid = 0;
        int end = n-1;
        
        while(mid <= end) {
            if(arr[mid] == 0) {
                swap(arr[start], arr[mid]);
                start++;
                mid++;
            }
            else if(arr[mid] == 1) {
                mid++;
            }
            else {
                swap(arr[mid], arr[end]);
                end--;
            }
        }
    }
};