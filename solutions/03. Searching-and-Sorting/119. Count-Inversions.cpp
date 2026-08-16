// ******** Given an array of integers arr[]. You have to find the Inversion Count of the array. Inversion count is the number of pairs of elements (i, j) such that i < j and arr[i] > arr[j]. ********

// <======== Example ========>
// Input: arr[] = [2, 4, 1, 3, 5]
// Output: 3

// Input: arr[] = [2, 3, 4, 5, 6]
// Output: 0

// Input: arr[] = [10, 10, 10]
// Output: 0


// Expected Time Complexity ==> O(n*logn)
// Expected Auxiliary Space ==> O(n)




class Solution{
    public:
    int mergeArrays(vector<int> &arr, int start, int end) {
        int count = 0;
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
            if(firstArr[i] <= secondArr[j]) {
                arr[k++] = firstArr[i++];
            } else {
                arr[k++] = secondArr[j++];
                count += (n-i);
            }
        }
        
        while(i < n) {
            arr[k++] = firstArr[i++];
        }
        
        while(j < m) {
            arr[k++] = secondArr[j++];
        }
        
        return count;
    }
    
    int mergeSort(vector<int> &arr, int start, int end) {
        if(start >= end) {
            return 0;
        }
        
        int count = 0;
        int mid = start + (end - start) / 2;
        count += mergeSort(arr, start, mid);
        count += mergeSort(arr, mid+1, end);
        count += mergeArrays(arr, start, end);
        return count;
    }
    
    int inversionCount(vector<int> &arr) {
        int n = arr.size();
        int ans = mergeSort(arr, 0, n-1);
        return ans;
    }
};
