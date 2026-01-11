// ******** You are given an integer array arr[]. Your task is to find the smallest positive number missing from the array. ********
// Note --> Positive number starts from 1. The array can have negative integers too.

// <======== Example ========>
// Input: arr[] = [2, -3, 4, 1, 1, 7]
// Output: 3

// Input: arr[] = [5, 3, 2, 5, 1]
// Output: 4

// Input: arr[] = [-8, 0, -1, -4, -3]
// Output: 1


// Expected Time Complexity ==> O(n*logn)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    int missingNumber(vector<int> &arr) {
        int n = arr.size();
        int posNumStart = 1;
        sort(arr.begin(), arr.end());
        
        for(int i = 0; i < n; i++) {
            if(arr[i] == posNumStart) {
                posNumStart++;
            }
        }
        
        return posNumStart;
    }
};