// ******** Given an array and a range a, b. The task is to partition the array around the range such that the array is divided into three parts. All elements smaller than a come first. All elements in range a to b come next. All elements greater than b appear in the end. The individual elements of three sets can appear in any order. You are required to return the modified array. ********
// Note --> The generated output is true if you modify the given array successfully Otherwise false.

// <======== Example ========>
// Input: arr[] = [1, 2, 3, 3, 4], a = 1, b = 2
// Output: true

// Input: arr[] = [1, 4, 3, 6, 2, 1], a = 1, b = 3
// Output: true


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    void threeWayPartition(vector<int>& arr, int a, int b) {
        int n = arr.size();
        int start = 0;
        int end = n-1;
        
        for(int i = 0; i <= end; i++) {
            if(arr[i] < a) {
                swap(arr[i], arr[start]);
                start++;
            }
            
            if(arr[i] > b) {
                swap(arr[i], arr[end]);
                i--;
                end--;
            }
        }
    }
};