// ******** Given an array, arr[]. Sort the array using bubble sort algorithm. ********

// <======== Example ========>
// Input: arr[] = [4, 1, 3, 9, 7]
// Output: [1, 3, 4, 7, 9]

// Input: arr[] = [10, 9, 8, 7, 6, 5, 4, 3, 2, 1]
// Output: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

// Input: arr[] = [1, 2, 3, 4, 5]
// Output: [1, 2, 3, 4, 5]


// Expected Time Complexity ==> O(n2)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    void bubbleSort(vector<int>& arr) {
        int n = arr.size();
        
        for(int i = 1; i < n; i++) {
            bool isSwapped = false;
            
            for(int j = 0; j < n-i; j++) {
                if(arr[j] > arr[j+1]) {
                    swap(arr[j], arr[j+1]);
                    isSwapped = true;
                }
            }
            
            if(isSwapped == false) {
                break;
            }
        }
    }
};