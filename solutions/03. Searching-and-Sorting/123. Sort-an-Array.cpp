// ******** Given an array of integers nums, sort the array in ascending order and return it. You must solve the problem without using any built-in functions in O(nlog(n)) time complexity and with the smallest space complexity possible. ********

// <======== Example ========>
// Input: nums = [5,2,3,1]
// Output: [1,2,3,5]

// Input: nums = [5,1,1,2,0,0]
// Output: [0,0,1,1,2,5]


// Expected Time Complexity ==> O(n*logn)
// Expected Auxiliary Space ==> O(n)




class Solution{
    public:
    void mergeArrays(vector<int>& arr, int start, int end) {
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

    void mergeSort(vector<int>& arr, int start, int end) {
        if(start >= end) {
            return;
        }

        int mid = start + (end - start) / 2;
        mergeSort(arr, start, mid);
        mergeSort(arr, mid+1, end);
        mergeArrays(arr, start, end);
    }

    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        mergeSort(nums, 0, n-1);
        return nums;
    }
};
