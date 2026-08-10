// ******** Given an unsorted array arr[] of numbers, sort the array in ascending order. ********

// <======== Example ========>
// Input: arr[] = [1, 5, 3, 2]
// Output: [1, 2, 3, 5]

// Input: arr[] = [3, 1]
// Output: [1, 3]

// Input: arr[] = [1, 2, 3]
// Output: [1, 2, 3]


// Expected Time Complexity ==> O(n*logn)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    void mergeArrays(vector<int> &arr, int start, int end) {
        int mid = start + (end - start) / 2;
        int n = mid-start+1;
        int m = end-mid;
        int firstArr[n];
        int secondArr[m];
        int k = start;
        
        for(int i = 0; i < n; i++) {
            firstArr[i] = arr[k++];
        }
        
        k = mid+1;
        for(int i = 0; i < m; i++) {
            secondArr[i] = arr[k++];
        }
        
        int i = 0;
        int j = 0;
        k = start;
        
        while(i < n && j < m) {
            if(firstArr[i] < secondArr[j]) {
                arr[k++] = firstArr[i++];
            } else {
                arr[k++] = secondArr[j++];
            }
        }
        
        while(i < n) {
            arr[k++] = firstArr[i++];
        }
        
        while(j < m) {
            arr[k++] = secondArr[j++];
        }
    }
    
    void mergeSort(vector<int> &arr, int start, int end) {
        if(start >= end) {
            return;
        }
        
        int mid = start + (end - start) / 2;
        mergeSort(arr, start, mid);
        mergeSort(arr, mid+1, end);
        mergeArrays(arr, start, end);
    }
    
    void sortArr(vector<int> &arr) {
        int n = arr.size();
        int start = 0;
        int end = n-1;
        mergeSort(arr, start, end);
    }
};