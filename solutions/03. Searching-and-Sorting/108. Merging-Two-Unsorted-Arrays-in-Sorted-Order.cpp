// ******** Given two different arrays arr1[] and arr2[], the task is to merge the two unsorted arrays and return a sorted array. ********

// <======== Example ========>
// Input: arr1[] = [10, 5, 15] , arr2[] = [20, 3, 2]
// Output: [2, 3, 5, 10, 15, 20]

// Input: arr1[] = [1, 10, 5, 15] , arr2[] = [20, 0, 2]
// Output: [0, 1, 2, 5, 10, 15, 20]


// Expected Time Complexity ==> O(n*logn + m*logm)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    void sortedMerge(vector<int>& arr1, vector<int>& arr2, vector<int>& res) {
        int n = arr1.size();
        int m = arr2.size();
        
        int i = 0;
        int j = 0;
        int k = 0;
        sort(arr1.begin(), arr1.end());
        sort(arr2.begin(), arr2.end());
        
        while(i < n && j < m) {
            if(arr1[i] < arr2[j]) {
                res[k++] = arr1[i++];
            } else {
                res[k++] = arr2[j++];
            }
        }
        
        while(i < n) {
            res[k++] = arr1[i++];
        }
        
        while(j < m) {
            res[k++] = arr2[j++];
        }
    }
};