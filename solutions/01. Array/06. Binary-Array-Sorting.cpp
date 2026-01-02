// ******** You are given a binary array arr[], where each element is either 0 or 1. Your task is to rearrange the array in increasing order in place (without using extra space). You do not need to return anything, simply modify the input array. ********

// <======== Example ========>
// Input: arr[] = [1, 0, 1, 1, 0]
// Output: [0, 0, 1, 1, 1]

// Input: arr[] = [1, 0, 1, 1, 1, 1, 1, 0, 0, 0]
// Output: [0, 0, 0, 0, 1, 1, 1, 1, 1, 1]

// Input: arr[] = [1, 1, 1, 1]
// Output: [1, 1, 1, 1]


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    void binSort(vector<int> &arr) {
        int n = arr.size();
        int start = 0;
        int end = n-1;
        
        while(start < end) {
            if(arr[start] == 0) {
                start++;
            } else {
                swap(arr[start], arr[end]);
                end--;
            }
        }
    }
};