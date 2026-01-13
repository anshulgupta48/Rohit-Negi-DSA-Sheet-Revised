// ******** Implement Quick Sort, a Divide and Conquer algorithm, to sort an array, arr[] in ascending order. Given an array arr[], with starting index low and ending index high, complete the functions partition() and quickSort(). Use the last element as the pivot, so that all elements less than or equal to the pivot come before it, and elements greater than the pivot follow it. ********
// Note --> low and high are inclusive.

// <======== Example ========>
// Input: arr[] = [4, 1, 3, 9, 7]
// Output: [1, 3, 4, 7, 9]

// Input: arr[] = [2, 1, 6, 10, 4, 1, 3, 9, 7]
// Output: [1, 1, 2, 3, 4, 6, 7, 9, 10]

// Input: arr[] = [5, 5, 5, 5]
// Output: [5, 5, 5, 5]


// Expected Time Complexity ==> O(n*logn)
// Expected Auxiliary Space ==> O(n)




class Solution{
    public:
    void quickSort(vector<int>& arr, int low, int high) {
        if(low >= high) {
            return;
        }
        
        int p = partition(arr, low, high);
        quickSort(arr, low, p-1);
        quickSort(arr, p+1, high);
    }
    
    int partition(vector<int>& arr, int low, int high) {
        int pivot = arr[low];
        int count = 0;
    
        for (int i = low+1; i <= high; i++) {
            if(arr[i] <= pivot) {
                count++;
            }
        }
        
        int pivotIndex = low + count;
        swap(arr[pivotIndex], arr[low]);
    
        int i = low, j = high;
        while(i < pivotIndex && j > pivotIndex) {
            while(arr[i] <= pivot) {
                i++;
            }
    
            while(arr[j] > pivot) {
                j--;
            }
    
            if(i < pivotIndex && j > pivotIndex) {
                swap(arr[i++], arr[j--]);
            }
        }
    
        return pivotIndex;
    }
};