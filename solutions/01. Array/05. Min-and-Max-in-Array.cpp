// ******** Given an array arr[]. Your task is to find the minimum and maximum elements in the array. ********

// <======== Example ========>
// Input: arr[] = [1, 4, 3, -5, -4, 8, 6]
// Output: [-5, 8]

// Input: arr[] = [12, 3, 15, 7, 9]
// Output: [3, 15]


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    vector<int> getMinMax(vector<int> &arr) {
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