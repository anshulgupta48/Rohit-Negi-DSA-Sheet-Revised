// ******** Given an unsorted array arr[ ] having both negative and positive integers. The task is to place all negative elements at the end of the array without changing the order of positive elements and negative elements. ********
// Note --> Don't return any array, just in-place on the array.

// <======== Example ========>
// Input: arr[] = [1, -1, 3, 2, -7, -5, 11, 6 ]
// Output: [1, 3, 2, 11, 6, -1, -7, -5]

// Input: arr[] = [-5, 7, -3, -4, 9, 10, -1, 11]
// Output: [7, 9, 10, 11, -5, -3, -4, -1]


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        int n = arr.size();
        int i = 0;
        vector<int> temp(n);
        
        for(int j = 0; j < n; j++) {
            if(arr[j] >= 0) {
                temp[i++] = arr[j];
            }
        }
        
        for(int j = 0; j < n; j++) {
            if(arr[j] < 0) {
                temp[i++] = arr[j];
            }
        }
        
        for(int j = 0; j < n; j++) {
            arr[j] = temp[j];
        }
    }
};