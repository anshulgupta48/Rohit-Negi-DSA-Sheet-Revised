// ******** Given an integer array arr[ ], your task is to find the minimum number of increment operations required to make all the array elements unique. i.e. no value in the array should occur more than once. In one operation, a value can be incremented by 1 only. ********
// Note --> The answer will always fit into a 32-bit integer.

// <======== Example ========>
// Input: arr[] = [3, 2, 1, 2, 1, 7]
// Output: 6

// Input: arr[] = [1, 2, 2]
// Output: 1

// Input: arr[] = [5, 4, 3, 2, 1]
// Output: 0


// Expected Time Complexity ==> O(n*logn)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    int minIncrements(vector<int>& arr) {
        int n = arr.size();
        int count = 0;
        sort(arr.begin(), arr.end());
        
        for(int i = 1; i < n; i++) {
            if(arr[i] <= arr[i-1]) {
                int value = (arr[i-1]-arr[i]+1);
                arr[i] += value;
                count += value;
            }
        }
        
        return count;
    }
};