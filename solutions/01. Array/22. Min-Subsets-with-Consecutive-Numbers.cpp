// ******** Given an array of distinct positive numbers, the task is to calculate the minimum number of subsets (or subsequences) from the array such that each subset contains consecutive numbers. ********

// <======== Example ========>
// Input: arr[] = [100, 56, 5, 6, 102, 58, 101, 57, 7, 103]
// Output: 3

// Input: arr[] = [10, 100, 105]
// Output: 3


// Expected Time Complexity ==> O(n*logn)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    int numOfSubset(vector<int> &arr) {
        int n = arr.size();
        int count = 1;
        sort(arr.begin(), arr.end());
        
        for(int i = 0; i < n-1; i++) {
            if(arr[i+1]-arr[i] != 1) {
                count++;
            }
        }
        
        return count;
    }
};