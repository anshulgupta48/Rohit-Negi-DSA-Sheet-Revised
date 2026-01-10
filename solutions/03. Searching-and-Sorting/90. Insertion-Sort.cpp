// ******** Given an array arr[] of positive integers.The task is to complete the insertsort() function which is used to implement Insertion Sort. ********

// <======== Example ========>
// Input: arr[] = [4, 1, 3, 9, 7]
// Output: [1, 3, 4, 7, 9]

// Input: arr[] = [10, 9, 8, 7, 6, 5, 4, 3, 2, 1]
// Output: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

// Input: arr[] = [4, 1, 9]
// Output: [1, 4, 9]


// Expected Time Complexity ==> O(n2)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    void insertionSort(vector<int>& arr) {
        int n = arr.size();
        
        for(int i = 1; i < n; i++) {
            int temp = arr[i];
            int j = i-1;
            
            for(; j >= 0; j--) {
                if(arr[j] > temp) {
                    arr[j+1] = arr[j];
                } else {
                    break;
                }
            }
            
            arr[j+1] = temp;
        }
    }
};