// ******** You are given a binary array arr[], where each element is either 0 or 1. Your task is to rearrange the array in increasing order in place (without using extra space). You do not need to return anything; simply modify the input array. ********

// <======== Example ========>
// Input: arr[] = [1, 0, 1, 1, 0]
// Output: [0, 0, 1, 1, 1]

// Input: arr[] = [1, 0, 1, 1, 1, 1, 1, 0, 0, 0]
// Output: [0, 0, 0, 0, 1, 1, 1, 1, 1, 1]

// Input: arr[] = [1, 1, 1, 1]
// Output: [1, 1, 1, 1]




class Solution {
  public:
    void binSort(vector<int> &arr) {
        int n = arr.size();
        int zeroCount = 0;
        
        for(int i = 0; i < n; i++) {
            if(arr[i] == 0) {
                zeroCount++;
            }
        }
        
        for(int i = 0; i < n; i++) {
            if(zeroCount > 0) {
                arr[i] = 0;
                zeroCount--;
            }
            else {
                arr[i] = 1;
            }
        }
    }
};