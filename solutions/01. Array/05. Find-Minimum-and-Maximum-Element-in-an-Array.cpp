// ******** Given an array arr. Your task is to find the minimum and maximum elements in the array. ********
// Note --> Return a Pair that contains two elements the first one will be a minimum element and the second will be a maximum.

// <======== Example ========>
// Input: arr[] = [3, 2, 1, 56, 10000, 167]
// Output: 1 10000

// Input: arr[] = [1, 345, 234, 21, 56789]
// Output: 1 56789

// Input: arr[] = [56789]
// Output: 56789 56789




class Solution{
    public:
    pair<int, int> getMinMax(vector<int> arr) {
        int n = arr.size();
        int minElement = INT_MAX;
        int maxElement = INT_MIN;
        
        for(int i = 0; i < n; i++) {
            if(arr[i] < minElement) {
                minElement = arr[i];
            }
            
            if(arr[i] > maxElement) {
                maxElement = arr[i];
            }
        }
        
        return {minElement, maxElement};
    }
};