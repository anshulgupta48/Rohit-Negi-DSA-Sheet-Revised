// ******** Given an array arr, use selection sort to sort arr[] in increasing order. ********

// <======== Example ========>
// Input: arr[] = [4, 1, 3, 9, 7]
// Output: [1, 3, 4, 7, 9]

// Input: arr[] = [10, 9, 8, 7, 6, 5, 4, 3, 2, 1]
// Output: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

// Input: arr[] = [38, 31, 20, 14, 30]
// Output: [14, 20, 30, 31, 38]


// Expected Time Complexity ==> O(n2)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    void selectionSort(vector<int> &arr) {
        int n = arr.size();
        
        for(int i = 0; i < n-1; i++) {
            int minIndex = i;
            
            for(int j = i+1; j < n; j++) {
                if(arr[j] < arr[minIndex]) {
                    minIndex = j;
                }
            }
            
            swap(arr[i], arr[minIndex]);
        }
    }
};