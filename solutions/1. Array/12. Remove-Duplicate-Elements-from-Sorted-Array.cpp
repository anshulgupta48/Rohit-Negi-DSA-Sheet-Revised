// ******** Given a sorted array arr. Return the size of the modified array which contains only distinct elements. Don't use set or HashMap to solve the problem. You must return the modified array size only where distinct elements are present and modify the original array such that all the distinct elements come at the beginning of the original array. ********

// <======== Example ========>
// Input: arr = [2, 2, 2, 2, 2]
// Output: [2]

// Input: arr = [1, 2, 4]
// Output: [1, 2, 4]




class Solution {
  public:
    int removeDuplicates(vector<int> &arr) {
        int n = arr.size();
        int i = 0;
        
        for(int j = 0; j < n-1; j++) {
            if(arr[j] != arr[j+1]) {
                arr[i++] = arr[j];
            }
        }
        
        arr[i++] = arr[n-1];
        return i;
    }
};