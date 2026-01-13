// ******** Given an array arr[], its starting position l and its ending position r. Sort the array using the merge sort algorithm. ********

// <======== Example ========>
// Input: arr[] = [4, 1, 3, 9, 7]
// Output: [1, 3, 4, 7, 9]

// Input: arr[] = [10, 9, 8, 7, 6, 5, 4, 3, 2, 1]
// Output: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]


// Expected Time Complexity ==> O(n*logn)
// Expected Auxiliary Space ==> O(n)




class Solution{
    public:
    void merge(vector<int>& arr, int start, int end) {
        int mid = start + (end - start) / 2;
        int n = mid-start+1;
        int m = end-mid;
    
        int firstArr[n];
        int secondArr[m];
        int k = start;
    
        for(int i = 0; i < n; i++) {
            firstArr[i] = arr[k++];
        }
    
        k = mid + 1;
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
    
    void mergeSort(vector<int>& arr, int l, int r) {
        if(l >= r) {
            return;
        }
        
        int mid = l + (r - l) / 2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid+1, r);
        merge(arr, l, r);
    }
};